#include "MyPanel.h"

USING_NS_CC;

void MyPanel::createPanel(){
	//常用组件生成
	_panel = Layout::create();
	_panel->setBackGroundColor(Color3B(173,195,192));
	_panel->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
	_panel->setContentSize(Size(160, 200));
	_panel->setPosition(Vec2(640, 400));

	//常用组件tiitle
	auto Title = Label::createWithTTF("components", "fonts/Marker Felt.ttf", 24);
	Title->setPosition(Vec2(Title->getContentSize().width-20,
		200-Title->getContentSize().height));
	//Title->setAlignment(TextHAlignment::CENTER);
	_panel->addChild(Title);

	//常用组件里面的其他子组件
	auto object = CCSprite::create("images/object.png");
	auto wood = CCSprite::create("images/wood.png");
	auto force = CCSprite::create("images/force.png");

	//force->setPosition(CCPoint(force->getContentSize().width, 20));
	//wood->setPosition(CCPoint(wood->getContentSize().width, force->getContentSize().height + 30));
	//object->setPosition(CCPoint(object->getContentSize().width, wood->getContentSize().height + 50));
	force->setPosition(CCPoint(Title->getContentSize().width - 20, 20));
	wood->setPosition(CCPoint(Title->getContentSize().width - 20, force->getContentSize().height + 40));
	object->setPosition(CCPoint(Title->getContentSize().width - 20, wood->getContentSize().height + 90));

	_panel->addChild(object,1,"object");
	_panel->addChild(wood,1,"wood");
	_panel->addChild(force,1,"force");
}

void MyPanel::WoodPanel(){
	//木板属性
	_panel = Layout::create();
	_panel->setBackGroundColor(Color3B(173, 195, 192));
	_panel->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
	_panel->setContentSize(Size(160, 400));
	_panel->setPosition(Vec2(640, 0));

	//常用组件tiitle
	auto Title = Label::createWithTTF("Attribute", "fonts/Marker Felt.ttf", 24);
	Title->setPosition(Vec2(Title->getContentSize().width,
		400-Title->getContentSize().height));
	Title->setAlignment(TextHAlignment::CENTER);
	_panel->addChild(Title);


	auto Tname = Label::createWithTTF("name", "fonts/Marker Felt.ttf", 14);
	Tname->setPosition(Vec2(Tname->getContentSize().width-10,
		340));
	_panel->addChild(Tname);

	auto Tweight = Label::createWithTTF("weight", "fonts/Marker Felt.ttf", 14);
	Tweight->setPosition(Vec2(Tweight->getContentSize().width - 15,
		310));
	_panel->addChild(Tweight);

	auto Tspeed = Label::createWithTTF("speed", "fonts/Marker Felt.ttf", 14);
	Tspeed->setPosition(Vec2(Tspeed->getContentSize().width - 10,
		280));
	_panel->addChild(Tspeed);

	auto Tlength = Label::createWithTTF("length", "fonts/Marker Felt.ttf", 14);
	Tlength->setPosition(Vec2(Tlength->getContentSize().width - 10,
		250));
	_panel->addChild(Tlength);

	auto Tangle = Label::createWithTTF("angle", "fonts/Marker Felt.ttf", 14);
	Tangle->setPosition(Vec2(Tangle->getContentSize().width - 10,
		220));
	_panel->addChild(Tangle);

	auto Tmcys = Label::createWithTTF("factor", "fonts/Marker Felt.ttf", 14);
	Tmcys->setPosition(Vec2(Tmcys->getContentSize().width - 10,
		190));
	_panel->addChild(Tmcys);


	//木板属性里面的各项生成
	auto name = EditBox::create(Size(100,30),Scale9Sprite::create("images/editbox.png"));
	auto quality = EditBox::create(Size(100, 23), Scale9Sprite::create("images/weight.png"));
	auto speed = EditBox::create(Size(100, 23), Scale9Sprite::create("images/speed.png"));
	auto length = EditBox::create(Size(100, 23), Scale9Sprite::create("images/length.png"));
	auto slope = EditBox::create(Size(100, 23), Scale9Sprite::create("images/angle.png"));
	auto Friction_factor = EditBox::create(Size(100, 30), Scale9Sprite::create("images/editbox.png"));

	name->setPosition(Vec2(name->getContentSize().width, 340));
	quality->setPosition(Vec2(quality->getContentSize().width, 310));
	speed->setPosition(Vec2(speed->getContentSize().width, 280));
	length->setPosition(Vec2(length->getContentSize().width, 250));
	slope->setPosition(Vec2(slope->getContentSize().width, 220));
	Friction_factor->setPosition(Vec2(Friction_factor->getContentSize().width, 190));

	_panel->addChild(name, 1, "wood_name");
	_panel->addChild(quality, 1, "wood_quality");
	_panel->addChild(speed, 1, "wood_speed");
	_panel->addChild(length, 1, "wood_len");
	_panel->addChild(slope, 1, "wood_slope");
	_panel->addChild(Friction_factor, 1, "wood_friction");
}

void MyPanel::ObjectPanel(){
	//物体属性生成
	_panel = Layout::create();
	_panel->setBackGroundColor(Color3B(173, 195, 192));
	_panel->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
	_panel->setContentSize(Size(160, 400));
	_panel->setPosition(Vec2(640, 0));

	//常用组件title
	auto Title = Label::createWithTTF("Attribute", "fonts/Marker Felt.ttf", 24);
	Title->setPosition(Vec2(Title->getContentSize().width, 
		400-Title->getContentSize().height));
	Title->setAlignment(TextHAlignment::CENTER);
	_panel->addChild(Title);


	auto Tname = Label::createWithTTF("name", "fonts/Marker Felt.ttf", 14);
	Tname->setPosition(Vec2(Tname->getContentSize().width - 10,
		340));
	_panel->addChild(Tname);

	auto Tweight = Label::createWithTTF("weight", "fonts/Marker Felt.ttf", 14);
	Tweight->setPosition(Vec2(Tweight->getContentSize().width - 15,
		310));
	_panel->addChild(Tweight);

	auto Tspeed = Label::createWithTTF("speed", "fonts/Marker Felt.ttf", 14);
	Tspeed->setPosition(Vec2(Tspeed->getContentSize().width - 10,
		280));
	_panel->addChild(Tspeed);

	auto Tmcys = Label::createWithTTF("factor", "fonts/Marker Felt.ttf", 14);
	Tmcys->setPosition(Vec2(Tmcys->getContentSize().width - 10,
		250));
	_panel->addChild(Tmcys);



	//物体属性各项生成
	auto name = EditBox::create(Size(100, 30), Scale9Sprite::create("images/editbox.png"));
	auto quality = EditBox::create(Size(100, 23), Scale9Sprite::create("images/weight.png"));
	auto speed = EditBox::create(Size(100, 23), Scale9Sprite::create("images/speed.png"));
	auto Friction_factor = EditBox::create(Size(100, 23), Scale9Sprite::create("images/editbox.png"));

	name->setPosition(Vec2(name->getContentSize().width, 340));
	quality->setPosition(Vec2(quality->getContentSize().width, 310));
	speed->setPosition(Vec2(speed->getContentSize().width, 280));
	Friction_factor->setPosition(Vec2(Friction_factor->getContentSize().width, 250));

	_panel->addChild(name, 1, "object_name");
	_panel->addChild(quality, 1, "object_quality");
	_panel->addChild(speed, 1, "object_speed");
	_panel->addChild(Friction_factor, 1, "object_friction");
}

void MyPanel::ForcePanel(){
	//力属性生成
	_panel = Layout::create();
	_panel->setBackGroundColor(Color3B(173, 195, 192));
	_panel->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
	_panel->setContentSize(Size(160, 400));
	_panel->setPosition(Vec2(640, 0));

	//常用组件tiitle
	auto Title = Label::createWithTTF("Attribute", "fonts/Marker Felt.ttf", 24);
	Title->setPosition(Vec2(Title->getContentSize().width, 
		400-Title->getContentSize().height));
	Title->setAlignment(TextHAlignment::CENTER);
	_panel->addChild(Title);

	auto Tname = Label::createWithTTF("name", "fonts/Marker Felt.ttf", 14);
	Tname->setPosition(Vec2(Tname->getContentSize().width - 10,
		340));
	_panel->addChild(Tname);

	auto Tsize = Label::createWithTTF("size", "fonts/Marker Felt.ttf", 14);
	Tsize->setPosition(Vec2(Tsize->getContentSize().width - 8,
		310));
	_panel->addChild(Tsize);

	auto Tangle = Label::createWithTTF("angle", "fonts/Marker Felt.ttf", 14);
	Tangle->setPosition(Vec2(Tangle->getContentSize().width - 10,
		280));
	_panel->addChild(Tangle);

	auto Tfobject = Label::createWithTTF("f-object", "fonts/Marker Felt.ttf", 14);
	Tfobject->setPosition(Vec2(Tfobject->getContentSize().width - 15,
		250));
	_panel->addChild(Tfobject);


	//力属性各项生成
	auto name = EditBox::create(Size(100, 30), Scale9Sprite::create("images/editbox.png"));
	auto size = EditBox::create(Size(100, 23), Scale9Sprite::create("images/force1.png"));
	auto slope = EditBox::create(Size(100, 23), Scale9Sprite::create("images/angle.png"));
	auto Acting_object = EditBox::create(Size(100, 30), Scale9Sprite::create("images/editbox.png"));

	name->setPosition(Vec2(name->getContentSize().width, 340));
	size->setPosition(Vec2(size->getContentSize().width, 310));
	slope->setPosition(Vec2(slope->getContentSize().width, 280));
	Acting_object->setPosition(Vec2(Acting_object->getContentSize().width, 250));

	_panel->addChild(name, 1, "force_name");
	_panel->addChild(size, 1, "force_size");
	_panel->addChild(slope, 1, "force_slope");
	_panel->addChild(Acting_object, 1, "force_actingObject");
}

Layout* MyPanel::getPanel(){
	return _panel;
}

void MyPanel::showXXPanel(){
	//用于显示信息的panel
	_panel = Layout::create();
	_panel->setBackGroundColor(Color3B(173, 195, 192));
	_panel->setBackGroundColorType(Layout::BackGroundColorType::SOLID);
	_panel->setContentSize(Size(160, 400));
	_panel->setPosition(Vec2(640, 0));

	auto Title = Label::createWithTTF("Data Info", "fonts/Marker Felt.ttf", 14);
	Title->setPosition(Vec2(Title->getContentSize().width,
		400 - Title->getContentSize().height));
	Title->setAlignment(TextHAlignment::CENTER);
	_panel->addChild(Title);

	//滑块信息显示
	auto _InfoTips1 = Label::createWithTTF("Slider Info", "fonts/Marker Felt.ttf", 14);
	_InfoTips1->setPosition(Vec2(30,360));
	_panel->addChild(_InfoTips1);

	auto _speedInfo = Label::createWithTTF("Speed:", "fonts/Marker Felt.ttf", 14);
	_speedInfo->setPosition(Vec2(30, 330));
	_panel->addChild(_speedInfo);
	auto _speedValue = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 14);
	_speedValue->setPosition(Vec2(35 + _speedInfo->getContentSize().width, 330));
	_panel->addChild(_speedValue, 1, "slider_speed");

	auto _accInfo = Label::createWithTTF("Acceleration:", "fonts/Marker Felt.ttf", 14);
	_accInfo->setPosition(Vec2(30, 300));
	_panel->addChild(_accInfo);
	auto _accValue = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 14);
	_accValue->setPosition(Vec2(35 + _accInfo->getContentSize().width, 300));
	_panel->addChild(_accValue, 1, "slider_acc");

	auto _distInfo = Label::createWithTTF("Distance:", "fonts/Marker Felt.ttf", 14);
	_distInfo->setPosition(Vec2(30, 270));
	_panel->addChild(_distInfo);
	auto _distValue = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 14);
	_distValue->setPosition(Vec2(30 + _distInfo->getContentSize().width, 270));
	_panel->addChild(_distValue, 1, "slider_dist");

	//木板信息显示
	auto _InfoTips2 = Label::createWithTTF("Wood Info", "fonts/Marker Felt.ttf", 14);
	_InfoTips2->setPosition(Vec2(30, 230));
	_panel->addChild(_InfoTips2);

	auto _speedInfo1 = Label::createWithTTF("Speed:", "fonts/Marker Felt.ttf", 14);
	_speedInfo1->setPosition(Vec2(35, 200));
	_panel->addChild(_speedInfo1);
	auto _speedValue1 = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 14);
	_speedValue->setPosition(Vec2(40 + _speedInfo1->getContentSize().width, 200));
	_panel->addChild(_speedValue1, 1, "wood_speed");

	auto _accInfo1= Label::createWithTTF("Acceleration:", "fonts/Marker Felt.ttf", 14);
	_accInfo1->setPosition(Vec2(35, 170));
	_panel->addChild(_accInfo1);
	auto _accValue1 = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 14);
	_accValue1->setPosition(Vec2(40 + _accInfo1->getContentSize().width, 170));
	_panel->addChild(_accValue1, 1, "wood_acc");

	auto _distInfo1 = Label::createWithTTF("Distance:", "fonts/Marker Felt.ttf", 14);
	_distInfo1->setPosition(Vec2(35, 140));
	_panel->addChild(_distInfo1);
	auto _distValue1 = Label::createWithTTF("0", "fonts/Marker Felt.ttf", 14);
	_distValue1->setPosition(Vec2(40 + _distInfo1->getContentSize().width, 140));
	_panel->addChild(_distValue1, 1, "wood_dist");
}