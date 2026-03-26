#include <ncurses.h>

int main()
{
    int ch;
    initscr();
    raw();
    keypad(stdscr, TRUE);
    noecho();
    while (ch != KEY_F(1))
    {
        ch = getch();
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
            move(y, x-1);
            delch();
            refresh();
            break;
        default:
            printw("%c", ch);
            refresh();
        }
        refresh();
    }

    endwin();

    return 0;
}
