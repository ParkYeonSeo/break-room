//====================================================
//소개용 샘플 Scene입니다.
//주석을 많이 써야지 다들 후반에 멘탈이 나가지 않습니다.
//====================================================
#include "stdafx.h"
#include "scene0.h"

//초기화를 담당하는 영역입니다.
//Scene이 draw을 할 때 필요한 이미지라던가, 미리 저장해두어야될
//내용들을 설정하는 영역입니다.
void scene0::opening() {
	
	int img_num = 0;
	set_image_mode(RectMode::Corner);
	while (1) {
		update_window();
		clear_background(HexColor{ 0xFFFFFFFF });
		switch (img_num) {
		case 0:
			draw_image(a, -300, -330, 600, 650);
			break;
		case 1:
			draw_image(b, -300, -330, 600, 650);
			break;
		case 2:
			draw_image(c, -300, -330, 600, 650);
			break;
		case 3:
			draw_image(d, -300, -330, 600, 650);
			break;
		case 4:
			draw_image(e, -300, -330, 600, 650);
			break;
		case 5:
			st++;
		}
		if (img_num == 5) {
			return;
		}

		if (GetAsyncKeyState(VK_RETURN) & 0x0001) {
			img_num++;
		}
	}
	

	
	
	
	
}