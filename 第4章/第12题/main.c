#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
int h=10;
float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=2,y4=-2;
float x,y,d1,d2,d3,d4;
printf("请输入该点的横坐标x:\t");
scanf("%f",&x);
printf("请输入该点的纵坐标y:\t");
scanf("%f",&y);
d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
d2=(x-x2)*(x-x2)+(y+y2)*(y+y2);
d3=(x+x3)*(x+x3)+(y-y3)*(y-y3);
d4=(x+x4)*(x+x4)+(y+y4)*(y+y4);
if(d1>1 && d2>1 && d3>1 && d4>1) h=0;
printf("该点的建筑高度为：%d\n",h);
}

