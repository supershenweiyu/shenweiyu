#include <stdio.h>
#include <math.h>

int main() {
float x1=1,x2,a;
printf("请输入a的值：\n");
scanf("%f",&a);
x2=a;
while(fabs(x1-x2)>=1e-5)
{
	x1=x2;
	x2=(x1+a/x1)/2;
}	
	printf("原式的值为：%f,%f",x1,x2);
	return 0;
}
