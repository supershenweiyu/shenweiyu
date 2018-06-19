#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
float x,y;
printf("请输入一个小于1000的正数:\t");
scanf("%f",&x); 
while(x<=0||x>=1000){
	printf("请重新输入！\n");
	return scanf("%f",&x);
}
y=sqrt(x);
printf("该数的平方根为：%.0f",y);

}
