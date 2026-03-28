#include <ncurses.h>


int ch;

void textInputLoop(int ch)
{
        switch (ch)
        {

        case KEY_BACKSPACE:
            int y,x;
            getyx(stdscr, y, x);
            if (x > 0) { mvdelch(y,x -1); } else {
                    getmaxyx(stdscr, y, x);
                    mvdelch(y, x-1);
                }
            refresh();
            break;
        case 8:
            getyx(stdscr, y, x);
            if (x > 0) { mvdelch(y,x -1); } else {
                    getmaxyx(stdscr, y, x);
                    mvdelch(y, x-1);
                }
            refresh();
            break;
        default:
            printw("%c", ch);
            refresh();
        }
        refresh();
}
