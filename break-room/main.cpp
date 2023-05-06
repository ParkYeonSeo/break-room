#include <iostream>
#include <Windows.h>
#include <doodle/doodle.hpp>

using namespace doodle;

void game1();
void game2();
void game3();

void start();
void end();

int main(void)
{
    create_window(1080, 720);
    while (!is_window_closed())
    {
        start();

        game1();
        game2();
        game3();

        end();
    }
    return 0;
}

void game1()
{

}

void game2()
{

}

void game3()
{

}

void start()
{

}

void end()
{

}
