#include <stdio.h>
#include <math.h>

int main() {
float x1=1,x2,a;
printf("������a��ֵ��\n");
scanf("%f",&a);
x2=a;
while(fabs(x1-x2)>=1e-5)
{
	x1=x2;
	x2=(x1+a/x1)/2;
}	
	printf("ԭʽ��ֵΪ��%f,%f",x1,x2);
	return 0;
}
