/**
* 物体类
**/
#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "MyForce.h"

using namespace std;

class object{
private:
	string name;
	double quality = 0;
	double speed = 0;
	double friction = 0;
	double Acceleration = 0;
	cocos2d::CCSprite* _object;
	int direct = 1; //1 表示加速度为正方向 -1 表示加速度为负方向

public:
	list<force*> forces;
	object(cocos2d::CCSprite* _object);
	object(string name, double quality, double speed, double friction, double Acceleration, cocos2d::CCSprite* _object);
	void setName(string name);
	string getName();
	void setQuality(double quality);
	double getQuality();
	void setSpeed(double speed);
	double getSpeed();
	void setFriction(double friction);
	double getFriction();
	void setAcceleration(double acceleration);
	double getAcceleration();
	void setSprite(cocos2d::CCSprite* _object);
	cocos2d::CCSprite* getSprite();
	void setParams(cocos2d::ui::Layout* _panel);
	void AddForce(force* _force);
	list<force*> getForces();
	void setDirect(int direct);
	int getDirect();
	void getPanelXX(cocos2d::ui::Layout* &_panel, float delta);
};