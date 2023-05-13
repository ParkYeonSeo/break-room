#include <iostream>
#include <Windows.h>
#include <doodle/doodle.hpp>    

#include "scene0.h"
#include "scene1.h"
#include "scene2.h"
#include "scene3.h"

using namespace doodle;

void logic();

int main(void)
{
    create_window(1080, 720);
    int stage_num = 0;

    while (!is_window_closed()) {

        update_window();
        clear_background(HexColor{ 0xFFFFFFFF });

        logic();

        switch (stage_num) {
        case 0:
            //������
        case 1:
            //��������
            break;
        case 2:
            //����ã��
            break;
        case 3:
            //����������
        }
    }
}
