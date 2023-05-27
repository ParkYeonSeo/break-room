#pragma once
class stage3 {
private:
	Image _hi;
	Image _second;
	Image _select[3];
	Image _result[3];
	Image _bi[3];
	Image heart;
	Image deadheart;
	Image _ending;
	Image _maker;
	Image _dead;

	int heart_x = -560;
	int heart_y = 280;
	int hp=5;
	double time = 0.0;
	double prev_time = 0.0;

	int _my_select = 0;
	int _game_state = 0;

public:
	void init();
	void getheart(int p);
	void logic();
	void draw();
	int end();
};