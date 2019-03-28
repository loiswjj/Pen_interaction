#include "MyForce.h"

using namespace cocos2d::ui;

force::force(cocos2d::CCSprite* _force){
	this->_force = _force;
}

void force::setName(std::string name){
	this->name = name;
}

std::string force::getName(){
	return this->name;
}

void force::setSize(float size){
	this->size = size;
}

float force::getSize(){
	return this->size;
}

void force::setSlope(int slope){
	this->slope = slope;
}

int force::getSlope(){
	return this->slope;
}

void force::setActingName(std::string Acting_object_name){
	this->Acting_object_name = Acting_object_name;
}

std::string force::getActingName(){
	return this->Acting_object_name;
}

void force::setSprite(cocos2d::CCSprite* _force){
	this->_force = _force;
}

cocos2d::CCSprite* force::getSprite(){
	return this->_force;
}

void force::setParams(cocos2d::ui::Layout* _panel){
	//通过获取面板上面的值来设置力的相关属性
	EditBox* _name = (EditBox*)_panel->getChildByName("force_name");
	std::string namestr = (std::string)_name->getText();
	this->setName(namestr);
	EditBox* _size = (EditBox*)_panel->getChildByName("force_size");
	this->setSize(atof(_size->getText()));
	EditBox* _slope = (EditBox*)_panel->getChildByName("force_slope");
	this->setSlope(atoi(_slope->getText()));
	EditBox* _actingobject = (EditBox*)_panel->getChildByName("force_actingObject");
	std::string actingName = (std::string)_actingobject->getText();
	this->setActingName(actingName);
}