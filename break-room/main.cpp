#include "stdafx.h"

#include "scene0.h"
#include "scene1.h"
#include "scene2.h"
#include "scene3.h"

using namespace doodle;



int main()
{
    create_window(1080, 720);
    int stage_num = 0;
    scene0 c0;
    c0.init();
    while (!is_window_closed()) {

        update_window();
        clear_background(HexColor{ 0xFFFFFFFF });

      

        switch (stage_num) {
        case 0://������
            c0.logic();
            c0.draw();
            break;
        case 1:
            //��������
            break;
        case 2:
            //����ã��
            break;
        case 3:
            //����������
            break;
        }
    }
}
