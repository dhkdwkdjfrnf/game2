#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main(void){
	int real_length=length/2;
	gotoxy(1, y);
	draw_rectangle(real_length+1, 1);
	gotoxy(x+2, y+1);
	printf("%s", s);
	gotoxy(real_length*2+2, y-1);
	printf("%2d", x);
}

