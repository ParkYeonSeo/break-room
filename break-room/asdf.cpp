#include "stdafx.h"
#include "asdf.h"

extern int heart_x;
extern int heart_y;
extern int hp;
extern int stage_num;

void stage1::draw() {
    set_image_mode(RectMode::Center);
    draw_image(stick, stick_x, stick_y, 200, 100);
    draw_image(key, ox, oy, 30, 30);

    for (int i = 0; i < 5; ++i) {
        draw_image(deadheart, heart_x + i * 45, heart_y, 40, 40);
    }
    for (int i = 0; i < hp; ++i) {
        draw_image(heart, heart_x + i * 45, heart_y, 40, 40);
    }
    for (int i = 0; i < cnt; ++i) {
        draw_image(key, -580 + i * 25, 220, 25, 25);
    }

    for (int i = 0; i < ball_cnt; ++i) {
        draw_image(ball, ball_x[i], ball_y[i], 40, 40);
    }
}
void stage1::logic() {
    if (cnt == 5) { 
        end();
    }
    if (hp == 0) {
        clear_background(255, 255, 255);
        draw_image(game_over, 0, 0, 590, 570);
        return;
    }
    timer += DeltaTime;
    if (timer < 2) {

        set_fill_color(HexColor{ 0xFF000080 });
        e = 0;
    }
    else {
        set_fill_color(HexColor{ 0xFF0000FF });

    }

    if (timer < 4) {
        draw_rectangle(ZONE.left, ZONE.top, ZONE.right, ZONE.bottom);
        if (e != 1 && timer >= 2 && (stick_x < ZONE.right + 60 && stick_x > ZONE.left - 60)) {
            hp--;
            e = 1;
        }
    }

    if (timer > 6) {
        timer = 0;
        ZONE.left = rand() % 600 - 300;
    }

    if ((oy > stick_y - 40 && oy < stick_y + 40) && (ox > stick_x - 60 && ox < stick_x + 60)) {
        cnt++;
        oy = rand() % 500 - 250;
        ox = rand() % 1200 - 600;
    }

    if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
        stick_x -= s_speed;
    }
    if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
        stick_x += s_speed;
    }
    if (GetAsyncKeyState(VK_UP) & 0x8000) {
        stick_y += s_speed;
    }
    if (GetAsyncKeyState(VK_DOWN) & 0x8000) {
        stick_y -= s_speed;
    }
    //ÇÃ·¹ÀÌ¾î ¸ÊÀÌÅ» ¹æÁö
    if (stick_y > 300) {
        stick_y -= s_speed;
    }
    if (stick_y < -300) {
        stick_y += s_speed;
    }
    if (stick_x >= 600) {
        stick_x -= s_speed;
    }
    if (stick_x <= -600) {
        stick_x += s_speed;
    }

    for (int i = 0; i < ball_cnt; ++i) {
        ball_y[i] -= y[i] * DeltaTime;
        ball_x[i] -= x[i] * DeltaTime;

        if (abs(ball_y[i]) >= 300) {
            y[i] *= -1;
        }
        if (abs(ball_x[i]) >= 600) {
            x[i] *= -1;
        }

        if ((ball_y[i] > stick_y - 40 && ball_y[i] < stick_y + 40) && (ball_x[i] > stick_x - 60 && ball_x[i] < stick_x + 60)) {
            y[i] = g_speed*1;
            ball_x[i] = rand() % 300;
            ball_y[i] = 300;
            --hp;
        }
    }
}

void stage1::end() {

    timer += DeltaTime;
    if (timer > 2) {

        stage_num++;
    }
}