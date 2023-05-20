#include <iostream>
#include <Windows.h>
#include <doodle/doodle.hpp>

using namespace doodle;

class stage3 {
public:
		void init();
		void logic();
		void draw();
		int end();

		
};
void stage3::init()
{
	for (int i = 1; i <= 4; ++i) {
		char link[100];
		sprintf_s(link, "¸¶µ¿¼®3.png", i);
		std::cout << "LOADING :: " << link;
		_button[i - 1] = Image(link);
		std::cout << " :: GOOD" << std::endl;
	}
void stage3::logic()
{

}
void stage3::draw()
{

}
int stage3::end()
{

}