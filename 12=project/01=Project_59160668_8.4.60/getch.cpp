//#include <<curses.h>
#include <iostream>
#include <stdio.h>
#include <ncurses.h>

int main() {
    initscr();
    addstr("hit a key:");
    getch();
    return endwin();
}
