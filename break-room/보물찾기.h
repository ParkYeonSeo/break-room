#pragma once

class stage2
{
public:
    //¼¼ÆÃ{
    double page = 0;
    double timer = 0;
    bool toggle = true;

    //ÄûÁî Á¾·ù(2°³)
    int num;

    //ÀÌ¹ÌÁö
    Image stage2;
    Image door;
    Image fire;
    Image girl;
    Image start;
    Image boss;
    Image Dead_text;
    Image Pass;
    Image deadheart;
    Image heart;
    Image game_over;

    //ÄûÁî1, ´ä:19(4¹ø)
    Image Quiz1;
    Image Quiz1_1;
    Image Quiz1_2;
    Image Quiz1_3;
    Image Quiz1_4;
    Image Quiz1_5;

    //ÄûÁî2, ´ä:ºÏ±Ø°õ(1¹ø)
    Image Quiz2;
    Image Quiz2_1;
    Image Quiz2_2;
    Image Quiz2_3;
    Image Quiz2_4;
    Image Quiz2_5;
    //}

public:
	void init();
	void draw();
	void logic();
	void end();
};