#include <doodle/doodle.hpp>
#include <exception>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace doodle;
using namespace std;

#include "����ã��.h"

//������ ��ġ and ����
extern int heart_x = -560;
extern int heart_y = 280;
extern int hp = 5;
extern int dead_hp = 5;

void stage2::init()
{
    //����{
    srand((unsigned int)time(NULL));

    //�̹���
    stage2 = Image{ "./Resource/stage2.png" };
    door = Image{ "./Resource/door.png" };
    fire = Image{ "./Resource/fire.png" };
    girl = Image{ "./Resource/girl.png" };
    start = Image{ "./Resource/start.png" };
    boss = Image{ "./Resource/boss.png" };
    Dead_text = Image{ "./Resource/Dead text.png" };
    Pass = Image{ "./Resource/Pass.png" };
    deadheart = Image{ "./Resource/deadheart.png" };
    heart = Image{ "./Resource/heart.png" };
    game_over = Image{ "./Resource/GAME OVER.png" };

    //����1, ��:19(4��)
    Quiz1 = Image{ "./Resource/Quiz1.png" };
    Quiz1_1 = Image{ "./Resource/Quiz1_1.png" };
    Quiz1_2 = Image{ "./Resource/Quiz1_2.png" };
    Quiz1_3 = Image{ "./Resource/Quiz1_3.png" };
    Quiz1_4 = Image{ "./Resource/Quiz1_4.png" };
    Quiz1_5 = Image{ "./Resource/Quiz1_5.png" };

    //����2, ��:�ϱذ�(1��)
    Quiz2 = Image{ "./Resource/Quiz2.png" };
    Quiz2_1 = Image{ "./Resource/Quiz2_1.png" };
    Quiz2_2 = Image{ "./Resource/Quiz2_2.png" };
    Quiz2_3 = Image{ "./Resource/Quiz2_3.png" };
    Quiz2_4 = Image{ "./Resource/Quiz2_4.png" };
    Quiz2_5 = Image{ "./Resource/Quiz2_5.png" };

    set_image_mode(RectMode::Center);
    //}
}

void stage2::draw()
{
    //����
    if (page == 0) {
        clear_background(255, 255, 255);

        draw_image(stage2, 0, 50, 912, 175);
        draw_image(start, 0, -100, 200, 61);
    }

    //���� ����
    if (page == 1) {
        clear_background(255, 255, 255);

        //�̹���
        draw_image(door, -420, -80, 300, 300);
        draw_image(door, -210, -80, 300, 300);
        draw_image(door, 0, -80, 300, 300);
        draw_image(door, 210, -80, 300, 300);
        draw_image(door, 420, -80, 300, 300);

        //����1
        if (num == 1) {
            draw_image(Quiz1, 0, 200, 800, 123);
            draw_image(Quiz1_1, -420, 90, 70, 58);
            draw_image(Quiz1_2, -210, 90, 55, 40);
            draw_image(Quiz1_3, 0, 90, 65, 50);
            draw_image(Quiz1_4, 210, 90, 60, 46);
            draw_image(Quiz1_5, 420, 90, 70, 63);
        }

        //����2
        if (num == 2) {
            draw_image(Quiz2, 0, 200, 800, 141);
            draw_image(Quiz2_1, -420, 90, 116, 50);
            draw_image(Quiz2_2, -210, 90, 122, 55);
            draw_image(Quiz2_3, 0, 90, 111, 50);
            draw_image(Quiz2_4, 210, 90, 161, 55);
            draw_image(Quiz2_5, 420, 90, 188, 60);
        }
    }

    //���� ���
    if (page == 2.1) {
        clear_background(255, 255, 255);
        draw_image(girl, -150, -40, 500, 500);
        draw_image(boss, 150, -40, 400, 520);
        draw_image(Pass, 240, 205, 180, 160);
    }

    //���� ����
    if (page == 2.2) {
        clear_background(255, 255, 255);
        draw_image(fire, 0, 0, 1500, 843);
        draw_image(boss, 0, -50, 400, 520);
        draw_image(Dead_text, 90, 195, 180, 160);
    }

    //������ ���
    if (page >= 0) {
        for (int i = 0; i < dead_hp; ++i) {
            draw_image(deadheart, heart_x + i * 45, heart_y, 40, 40);
        }
        for (int i = 0; i < hp; ++i) {
            draw_image(heart, heart_x + i * 45, heart_y, 40, 40);
        }
    }

    //���ӿ���
    if (page == 3) {
        clear_background(255, 255, 255);
        draw_image(game_over, 0, 0, 310, 170);
    }

}

void stage2::logic()
{
    //����
    if (page == 0) {
        if (MouseIsPressed) {
            float mx = get_mouse_x();
            float my = get_mouse_y();

            if (mx > -90 && mx < 90 && my < -70 && my > -120) {
                page = 1;
                toggle = false;
            }
        }
    }

    //���� ����
    if (page == 1) {

        //���콺 Ŭ�� ����
        if (MouseIsPressed) {
            if (toggle) {
                float mx = get_mouse_x();
                float my = get_mouse_y();
                //1����(����2 ����)
                if (mx > -490 && mx < -350 && my < 50 && my > -190) {
                    if (num == 2) {
                        page = 2.1;
                    }
                    else {
                        page = 2.2;
                    }
                }
                //2����
                if (mx > -280 && mx < -140 && my < 50 && my > -190) {
                    page = 2.2;
                }
                //3����
                if (mx > -70 && mx < 70 && my < 50 && my > -190) {
                    page = 2.2;
                }
                //4����(����1 ����)
                if (mx > 140 && mx < 280 && my < 50 && my > -190) {
                    if (num == 1) {
                        page = 2.1;
                    }
                    else {
                        page = 2.2;
                    }
                }
                //5����
                if (mx > 350 && mx < 490 && my < 50 && my > -190) {
                    page = 2.2;
                }
            }

        }
        else {
            toggle = true;
        }
    }

    //���� ���
    if (page == 2.1) {
        //�������� �Ѿ�� �ۼ�
    }

    //���� ����
    if (page == 2.2) {
        timer += DeltaTime;
        //������ ����
        if (timer > 2.5 && hp > 0) {
            page = 1;
            timer = 0;
        }
        //���ӿ��� ���
        if (timer > 2 && hp == 0) {
            page = 3;
            timer = 0;
        }
    }

    //������ ���
    if (page >= 0) {
        for (int i = 0; i < hp; ++i) {
            if (page == 2.2) {
                if (toggle) {
                    --hp;
                    toggle = false;
                }
            }
        }
    }

}

void stage2::end()
{


}