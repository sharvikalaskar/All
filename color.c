#include <stdio.h>
#include <conio.h>

int main()
{
    clrscr();

    textcolor(RED);
    cprintf("This is Red text\n");

    textcolor(YELLOW);
    textbackground(BLUE);
    cprintf("Yellow on Blue\n");

    textcolor(LIGHTCYAN + BLINK);
    cprintf("Blinking Light Cyan!\n");

    textcolor(LIGHTGRAY);
    textbackground(BLACK);
    cprintf("Back to normal.\n");

    getch();
    return 0;
}
