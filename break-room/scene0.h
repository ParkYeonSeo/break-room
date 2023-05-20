#pragma once
class scene0
{
private:
	Image _button[4];
	POINT _location[4];//위치정보
	POINT _look_vector[4];//방향정보
	float _move_speed = 4.f;

public:
	void init();
	void logic();
	void draw();
	void destroy();
};

