#include "Object.h"

using namespace cocos2d::ui;

object::object(cocos2d::CCSprite* _object){
	this->_object = _object;
}

object::object(string name, double quality, double speed, double friction, double Acceleration, cocos2d::CCSprite* _object){
	this->name = name;
	this->quality = quality;
	this->speed = speed;
	this->friction = friction;
	this->Acceleration = Acceleration;
	this->_object = _object;
}

void object::setName(string name){
	this->name = name;
}

string object::getName(){
	return this->name;
}

void object::setQuality(double quality){
	this->quality = quality;
}

double object::getQuality(){
	return this->quality;
}

void object::setSpeed(double speed){
	this->speed = speed;
}

double object::getSpeed(){
	return this->speed;
}

void object::setFriction(double friction){
	this->friction = friction;
}

double object::getFriction(){
	return this->friction;
}

void object::setAcceleration(double acceleration){
	this->Acceleration = acceleration;
}

double object::getAcceleration(){
	return this->Acceleration;
}

void object::setSprite(cocos2d::CCSprite* _object){
	this->_object = _object;
}

cocos2d::CCSprite* object::getSprite(){
	return this->_object;
}

void object::setParams(Layout* _panel){
	EditBox* _name = (EditBox*)_panel->getChildByName("object_name");
	std::string name = (std::string)_name->getText();
	this->setName(name);
	EditBox* _quality = (EditBox*)_panel->getChildByName("object_quality");
	this->setQuality(atof(_quality->getText()));
	EditBox* _speed = (EditBox*)_panel->getChildByName("object_speed");
	this->setSpeed(atof(_speed->getText()));
	EditBox* _friction = (EditBox*)_panel->getChildByName("object_friction");
	this->setFriction(atof(_friction->getText()));
}

void object::AddForce(force* _force){
	this->forces.push_back(_force);
}

list<force*> object::getForces(){
	return this->forces;
}

void object::setDirect(int direct){
	this->direct = direct;
}

int object::getDirect(){
	return this->direct;
}

void object::getPanelXX(cocos2d::ui::Layout* &_panel, float delta){
	cocos2d::Label* _speed = (cocos2d::Label*)_panel->getChildByName("slider_speed");
	cocos2d::Label* _acc = (cocos2d::Label*)_panel->getChildByName("slider_acc");
	cocos2d::Label* _dist = (cocos2d::Label*)_panel->getChildByName("slider_dist");

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