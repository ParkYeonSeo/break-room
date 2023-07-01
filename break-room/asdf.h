#pragma once
#define ball_cnt 6
#define s_speed 5
#define g_speed 200
class stage1 {
public:

    int stick_x = 0;
    int stick_y = -300;

    int ball_x[ball_cnt] = { 0,200,-10, -100,300,-300 };
    int ball_y[ball_cnt] = { 0,60,-60, 100,-130,200 };

    int bx = -480;
    int by = 270;

    int ox = 0;
    int oy = -300;

    int e = 0;

    int cnt = -1;
    int x[ball_cnt] = { 1*g_speed,-1 * g_speed,1 * g_speed,-1 * g_speed,-1 * g_speed,1 * g_speed };
    int y[ball_cnt] = { 1 * g_speed,1 * g_speed,-1 * g_speed,1 * g_speed,-1 * g_speed,-1 * g_speed };


    RECT ZONE{ 0,-300,300,600 };
    double timer = 0;

    void draw();
    void logic();
    void end();
    const Image game_over{ "./Resource/1.png" };
    const Image ball{ "./Resource/ball.png" };
    const Image stick{ "./Resource/wn.png" };
    const Image heart{ "./Resource/heart.png" };
    const Image deadheart{ "./Resource/deadheart.png" };
    const Image key{ "./Resource/key.png" };

};