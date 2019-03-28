#include "cocos2d.h"
#include "ui\CocosGUI.h"

using namespace cocos2d::ui;

class MyPanel : public cocos2d::Layer{
private:
	Layout* _panel;

public:
	void createPanel();

	void DestoryPanel();

	void WoodPanel();

	void ObjectPanel();

	void ForcePanel();

	Layout* getPanel();

	void showXXPanel();
};