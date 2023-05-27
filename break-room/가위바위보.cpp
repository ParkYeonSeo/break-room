#include "stdafx.h"

#include "가위바위보.h"
using namespace doodle;


void stage3::init()
{
	_hi = Image("./Resource/001.png");
	_second = Image("./Resource/002.png");
	_select[0] = Image("./Resource/002.png");
	_select[1] = Image("./Resource/003.png");
	_select[2] = Image("./Resource/004.png");

	_result[0] = Image("./Resource/005.png");
	_result[1] = Image("./Resource/006.png");
	_result[2] = Image("./Resource/007.png");

	_bi[0]= Image("./Resource/008.png");
	_bi[1] = Image("./Resource/2.png");
	_bi[2] = Image("./Resource/009.png");

	heart = Image("./Resource/heart.png");
	deadheart = Image("./Resource/deadheart.png");
}
void stage3::getheart(int p)
{
	hp = p;
}
void stage3::logic()
{
	//왼쪽
	if (GetAsyncKeyState(VK_LEFT) & 0x0001) {
		if (_game_state == 0) _my_select = (_my_select + 2) % 3;
	}
	//오른쪽
	if (GetAsyncKeyState(VK_RIGHT) & 0x0001) {
		if (_game_state == 0) _my_select = (_my_select + 1) % 3;
	}
	//엔터

	if (GetAsyncKeyState(VK_RETURN) & 0x0001) {
		switch (_game_state) {
		case 0:
			_game_state = 1;
			break;
		case 1:
			switch (_my_select) {
			case 0: case 2:
				hp--;
				break;
			}
			_game_state = 2;
			break;
		case 2:

			//여기서 원래대로 돌아가는 코드 작성

			switch (_my_select) {
			case 0: case 2:
				_game_state = 0;
				break;
			}
			break;
		}
		
	}
	time += DeltaTime;

}
void stage3::draw()
{
	if (time < 5) {//비교하는 수는 몇초기다릴지임
		
		draw_image(_hi, -300, -360, 600, 650);
	}
	else {
		switch (_game_state) {
		case 0:
			draw_image(_select[_my_select], -300, -330, 600, 650);
			break;
		case 1:
			draw_image(_result[_my_select], -300, -330, 600, 650);
			break;
		case 2:
			draw_image(_bi[_my_select], -300, -330, 600, 650);
			break;
		case 3:

		}
	}
	for (int i = 0; i < 5; ++i) {
		draw_image(deadheart, heart_x + i * 45, heart_y, 40, 40);
	}
	for (int i = 0; i < hp; ++i) {
		draw_image(heart, heart_x + i * 45, heart_y, 40, 40);
	}
}
int stage3::end()
{
	return 0;
}