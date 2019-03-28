/**
* ŒÔÃÂ¿‡
**/
#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "MyForce.h"

using namespace std;

class Wood{
private:
	string name;
	double quality = 0;
	double speed = 0;
	double length = 0;
	int slop= 0;
	double friction = 0;
	double Acceleration = 0;
	cocos2d::CCSprite* _wood;
	int direct = 1;

public:
	list<force*> forces;
	Wood(string name, double quality, double speed, double length, int slop, double friction, cocos2d::CCSprite* _wood);
	Wood(cocos2d::CCSprite* _wood);
	void setName(string name);
	string getName();
	void setQuality(double quality);
	double getQuality();
	void setSpeed(double speed);
	double getSpeed();
	void setLength(double length);
	double getLength();
	void setSlope(int slope);
	int getSlope();
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

	void getPanelXX(cocos2d::ui::Layout* &_panel,float delta);
};