//====================================================
//�Ұ��� ���� Scene�Դϴ�.
//�ּ��� ���� ����� �ٵ� �Ĺݿ� ��Ż�� ������ �ʽ��ϴ�.
//====================================================
#include "stdafx.h"
#include "scene0.h"
extern int stage_num;
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
			draw_image(d, -300, -330, 600, 650);
			break;
		case 3:
			draw_image(e, -300, -330, 600, 650);
			break;
		case 4:
			draw_image(f, -600, -330, 600, 650);
			draw_image(g, 0, -330, 600, 650);
			if (MouseIsPressed) {
				if (get_mouse_x() > 0) {
					img_num = 6;
					
				}
				else {
					img_num = 5;
					
				}
			}
			break;
		case 5:
			draw_image(j, -300, -330, 600, 650);
			break;
		case 6:
			draw_image(h, -300, -330, 600, 650);
			break;

		}
		
		

		if (GetAsyncKeyState(VK_RETURN) & 0x0001 && img_num < 4) {
			img_num++;
		}
		if (GetAsyncKeyState(VK_RETURN) & 0x8000 && img_num == 5) {
			stage_num++;
			break;
		}
	}
	

	
	
	
	
}