//====================================================
//�Ұ��� ���� Scene�Դϴ�.
//�ּ��� ���� ����� �ٵ� �Ĺݿ� ��Ż�� ������ �ʽ��ϴ�.
//====================================================
#include "stdafx.h"
#include "scene0.h"

//�ʱ�ȭ�� ����ϴ� �����Դϴ�.
//Scene�� draw�� �� �� �ʿ��� �̹��������, �̸� �����صξ�ߵ�
//������� �����ϴ� �����Դϴ�.
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