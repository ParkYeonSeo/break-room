#include "stdafx.h"

#include "scene0.h"
#include "scene1.h"
#include "scene2.h"
#include "scene3.h"

#include "����������.h"


#include "����ã��.h"

using namespace doodle;



int main()
{
    create_window(1200, 600);


    int stage_num = 3;

    scene0 c0;
    c0.init();

    stage3 s0;
    s0.init();

    stage2 e0;
    e0.init();


    while (!is_window_closed()) {

        update_window();
        clear_background(HexColor{ 0xFFFFFFFF });

      

        switch (stage_num) {
        case 0:
            //������
            c0.logic();
            c0.draw();
            break;
        case 1:
            //��������
            break;
        case 2:
            //����ã��
            e0.logic();
            e0.draw();
            break;
        case 3:
            s0.logic();
            s0.draw();
            break;
        }
    }
}
