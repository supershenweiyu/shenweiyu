#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
float x,y;
printf("������һ��С��1000������:\t");
scanf("%f",&x); 
while(x<=0||x>=1000){
	printf("���������룡\n");
	return scanf("%f",&x);
}
y=sqrt(x);
printf("������ƽ����Ϊ��%.0f",y);

}
