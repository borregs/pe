#include <ncurses.h>
#include <string.h>

void main(){

char cadena[]="ESVIERNES";  
int maxx=0, maxy=0;
WINDOW *w;

initscr();
cbreak();
getmaxyx(stdscr,maxy,maxx);
box(stdscr,'+','*');

mvprintw(1,1,"Introduce tu cadena:\n>>");
getstr(cadena);

for(int x=0;x<strlen(cadena);x++)
{
mvprintw(x+3,2,"%c",cadena[x]);
mvprintw(x+3,strlen(cadena)+1,"%c",cadena[strlen(cadena)-(x+1)]);
}
for(int y=0;y<strlen(cadena);y++)
{
mvprintw(3,y+2,"%c",cadena[y]);
mvprintw(strlen(cadena)+2,y+2,"%c",cadena[strlen(cadena)-(y+1)]);
}
getch();
refresh();
endwin();


}
