#include <ncurses.h>
#include "window.h"
#include "../textinput/textinput.h"
void WindowInit()
{
    int ch;
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    while (ch != KEY_F(1))
    {
        ch = getch();
        textInputLoop(ch);
    }
    endwin();
}


