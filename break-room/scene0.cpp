//====================================================
//소개용 샘플 Scene입니다.
//주석을 많이 써야지 다들 후반에 멘탈이 나가지 않습니다.
//====================================================
#include "stdafx.h"
#include "scene0.h"

//초기화를 담당하는 영역입니다.
//Scene이 draw을 할 때 필요한 이미지라던가, 미리 저장해두어야될
//내용들을 설정하는 영역입니다.
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
