#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
setbkcolor(CYAN);
setcolor(GREEN);
outtextxy(200,50,"Line");
line(145,50,30,50);
circle(300,330,40);
outtextxy(400,330,"Circle");
rectangle(140,220,230,140);
outtextxy(250,180,"Rectangle");
pieslice(500,400,0,270,60);
ellipse(200,400,0,360,70,30);
sleep(5);
cleardevice();
closegraph();
}