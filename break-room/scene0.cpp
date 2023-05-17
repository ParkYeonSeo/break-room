//====================================================
//�Ұ��� ���� Scene�Դϴ�.
//�ּ��� ���� ����� �ٵ� �Ĺݿ� ��Ż�� ������ �ʽ��ϴ�.
//====================================================
#include "stdafx.h"
#include "scene0.h"

//�ʱ�ȭ�� ����ϴ� �����Դϴ�.
//Scene�� draw�� �� �� �ʿ��� �̹��������, �̸� �����صξ�ߵ�
//������� �����ϴ� �����Դϴ�.
void scene0::init()
{
	for (int i = 1; i <= 4; ++i) {
		char link[100];
		sprintf_s(link, "./Resource/sample/button_%d.png", i);
		std::cout << "LOADING :: " << link;
		_button[i - 1] = Image(link);
		std::cout << " :: GOOD" << std::endl;
	}

	for (int i = 0; i < 4; ++i) {
		_location[i].x = rand() % Width - (Width / 2);
		_location[i].y = rand() % Height - (Height / 2);
		_look_vector[i].y = rand() % 2;
		_look_vector[i].x = rand() % 2;
	}
}

void scene0::logic()
{
	for (int i = 0; i < 4; ++i) {
		if (_look_vector[i].x) {
			_location[i].x += _move_speed;
			if (_location[i].x > (Width / 2)) {
				_look_vector[i].x = 0;
			}
		}
		else {
			_location[i].x -= _move_speed;
			if (_location[i].x < -(Width / 2)) {
				_look_vector[i].x = 1;
			}
		}
		if (_look_vector[i].y) {
			_location[i].y += _move_speed;
			if (_location[i].y > (Height / 2)) {
				_look_vector[i].y = 0;
			}
		}
		else {
			_location[i].y -= _move_speed;
			if (_location[i].y < -(Height / 2)) {
				_look_vector[i].y = 1;
			}
		}
	}
}

void scene0::draw()
{
	set_image_mode(RectMode::Center);
	for (int i = 0; i < 4; ++i) {
		draw_image(_button[i], _location[i].x, _location[i].y, 100, 100);
	}
}

void scene0::destroy()
{
}
