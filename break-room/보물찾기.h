#pragma once

class stage2
{
public:
    //����{
    double page = 0;
    double timer = 0;
    bool toggle = true;

    //���� ����(2��)
    int num;

    //�̹���
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

    //����1, ��:19(4��)
    Image Quiz1;
    Image Quiz1_1;
    Image Quiz1_2;
    Image Quiz1_3;
    Image Quiz1_4;
    Image Quiz1_5;

    //����2, ��:�ϱذ�(1��)
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