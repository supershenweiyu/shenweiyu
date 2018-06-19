#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
float x,y;
printf("请输入x的值：");
scanf("%f",&x);
if(x<1){
    y=x;
}
else if(x>=1&&x<10){
	y=2*x-1;
}
else y=3*x-11;
printf("y的值为：%.2f",y);
}
