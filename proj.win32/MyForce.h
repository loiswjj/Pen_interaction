#ifndef POINT_H //���û�ж���POINT_H����꣬��������´���
#define POINT_H 0 //����� ������˺��ظ�����
#include "cocos2d.h"
#include "ui\CocosGUI.h"

class force{
private:
	std::string name;
	float size;
	int slope;
	std::string Acting_object_name;
	cocos2d::CCSprite* _force;

public:
	force(cocos2d::CCSprite* _force);
	//force(std::string name, float size, int slope, std::string Acting_object_name, cocos2d::CCSprite* _force);
	void setName(std::string name);
	std::string getName();
	void setSize(float size);
	float getSize();
	void setSlope(int slope);
	int getSlope();
	void setActingName(std::string Acting_object_name);
	std::string getActingName();
	void setSprite(cocos2d::CCSprite* _force);
	cocos2d::CCSprite* getSprite();
	void setParams(cocos2d::ui::Layout* _panel);
};
#endif