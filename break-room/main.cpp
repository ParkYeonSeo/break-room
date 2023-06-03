#include "stdafx.h"

#include "scene0.h"

#include "가위바위보.h"
#include "asdf.h"
#include "보물찾기.h"

using namespace doodle;

int heart_x = -560;
int heart_y = 280;
int hp = 5;
int stage_num = 1;

int main()
{
    create_window(1200, 600);

    scene0 s0; //오프닝
    s0.init();

    stage1 s1; //벽돌깨기

    stage2 s2; //보물찾기
    s2.init();

    stage3 s3; //가위바위보
    s3.init();

    

    while (!is_window_closed()) {

        update_window();
        clear_background(HexColor{ 0xFFFFFFFF });
      

        switch (stage_num) {
        case 0:
            //오프닝
            s0.logic();
            s0.draw();
            break;
        case 1:
            s1.logic();
            s1.draw();
            //벽돌깨기
            break;
        case 2:
            //보물찾기
            s2.logic();
            s2.draw();
            break;
        case 3:
            s3.logic();
            s3.draw();
            break;
            //가위바위보
        }
    }
}
