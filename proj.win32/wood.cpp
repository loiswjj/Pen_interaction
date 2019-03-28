#include "wood.h"

using namespace cocos2d::ui;

Wood::Wood(cocos2d::CCSprite* _wood){
	this->_wood = _wood;
}

Wood::Wood(string name, double quality, double speed, double length, int slop, double friction, cocos2d::CCSprite* _wood){
	this->name = name;
	this->quality = quality;
	this->speed = speed;
	this->length = length;
	this->slop = slop;
	this->friction = friction;
	this->_wood = _wood;
}

void Wood::setName(string name){
	this->name = name;
}

string Wood::getName(){
	return this->name;
}

void Wood::setQuality(double quality){
	this->quality = quality;
}

double Wood::getQuality(){
	return this->quality;
}

void Wood::setSpeed(double speed){
	this->speed = speed;
}

double Wood::getSpeed(){
	return this->speed;
}

void Wood::setLength(double length){
	this->length = length;
}

double Wood::getLength(){
	return this->length;
}

void Wood::setSlope(int slope){
	this->slop = slope;
}

int Wood::getSlope(){
	return this->slop;
}

void Wood::setFriction(double friction){
	this->friction = friction;
}

double Wood::getFriction(){
	return this->friction;
}

void Wood::setAcceleration(double acceleration){
	this->Acceleration = acceleration;
}

double Wood::getAcceleration(){
	return this->Acceleration;
}

void Wood::setSprite(cocos2d::CCSprite* _object){
	this->_wood = _object;
}

cocos2d::CCSprite* Wood::getSprite(){
	return this->_wood;
}

void Wood::setParams(cocos2d::ui::Layout* _panel){
	EditBox* _name = (EditBox*)_panel->getChildByName("wood_name");
	std::string name = (std::string)_name->getText();
	this->setName(name);

	EditBox* _quality = (EditBox*)_panel->getChildByName("wood_quality");
	this->setQuality(atof(_quality->getText()));

	EditBox* _speed = (EditBox*)_panel->getChildByName("wood_speed");
	this->setSpeed(atof(_speed->getText()));

	EditBox* _length = (EditBox*)_panel->getChildByName("wood_len");
	float len = atof(_length->getText());
	this->setLength(len);
	this->getSprite()->setScaleX(len * 2 / 3);

	EditBox* _slope = (EditBox*)_panel->getChildByName("wood_slope");
	this->setSlope(atof(_slope->getText()));

	EditBox* _friction = (EditBox*)_panel->getChildByName("wood_friction");
	this->setFriction(atof(_friction->getText()));
}

void Wood::AddForce(force* force){
	this->forces.push_back(force);
}

list<force*> Wood::getForces(){
	return this->forces;
}

void Wood::setDirect(int direct){
	this->direct = direct;
}

int Wood::getDirect(){
	return this->direct;
}

void Wood::getPanelXX(cocos2d::ui::Layout* &_panel,float delta){
	cocos2d::Label* _speed = (cocos2d::Label*)_panel->getChildByName("wood_speed");
	cocos2d::Label* _acc = (cocos2d::Label*)_panel->getChildByName("wood_acc");
	cocos2d::Label* _dist = (cocos2d::Label*)_panel->getChildByName("wood_dist");

	char s[100];
	sprintf(s, "%*.*f", 10, 2, this->speed);;
	_speed->setString(std::string(s));

	sprintf(s, "%*.*f", 10, 2, this->Acceleration);
	_acc->setString(std::string(s));

	double d = atof(_dist->getString().c_str());
	double _nowdist = d + this->speed*delta;
	sprintf(s, "%*.*f", 10, 2, _nowdist);
	_dist->setString(std::string(s));
}