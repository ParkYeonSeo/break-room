#pragma once
class scene0
{
private:
	Image _button[4];
	POINT _location[4];//��ġ����
	POINT _look_vector[4];//��������
	float _move_speed = 4.f;

public:
	void init();
	void logic();
	void draw();
	void destroy();
};

