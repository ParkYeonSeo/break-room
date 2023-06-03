#include "stdafx.h"

#include "scene0.h"

#include "����������.h"
#include "asdf.h"
#include "����ã��.h"

using namespace doodle;

int heart_x = -560;
int heart_y = 280;
int hp = 5;
int stage_num = 1;

int main()
{
    create_window(1200, 600);

    scene0 s0; //������
    s0.init();

    stage1 s1; //��������

    stage2 s2; //����ã��
    s2.init();

    stage3 s3; //����������
    s3.init();

    

    while (!is_window_closed()) {

        update_window();
        clear_background(HexColor{ 0xFFFFFFFF });
      

        switch (stage_num) {
        case 0:
            //������
            s0.logic();
            s0.draw();
            break;
        case 1:
            s1.logic();
            s1.draw();
            //��������
            break;
        case 2:
            //����ã��
            s2.logic();
            s2.draw();
            break;
        case 3:
            s3.logic();
            s3.draw();
            break;
            //����������
        }
    }
}
