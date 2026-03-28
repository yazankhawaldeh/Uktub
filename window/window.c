#include <ncurses.h>
#include "window.h"
#include "../textinput/textinput.h"

typedef struct
{
    char **lines;
    int num_lines;
    int capacity; //We define the integers after the char because of padding. We add an extra 6 bytes per struct if we define before char. Now it is only 2 bytes. Good for long run with big files.
} Buffer;
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


