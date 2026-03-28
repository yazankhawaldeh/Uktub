#include <ncurses.h>


int ch;

void textInputLoop(int ch)
{
        switch (ch)
        {

        case KEY_BACKSPACE:
            int y,x; //coordinate of cursor
            getyx(stdscr, y, x); // get the coordinates on screen
            if (x > 0) // if not EOL
            { mvdelch(y,x -1);  // delete char @ cursor
            } else {
                getcury(stdscr); // get amount of lines
                if (y > 0)
                {
                mvdelch(y-1, getcurx(stdscr));
                }
            }
            refresh();
            break;
        case KEY_F(2):
            printw("The max y value is %d", getmaxy(stdscr));
            break;
        default:
            printw("%c", ch);
            refresh();
        }
        refresh();
}


