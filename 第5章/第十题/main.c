#include <stdio.h>
#include <math.h>

int main() {	
int i;
float sum=0,a=2,b=1,c,d;
for(i=1;i<=20;i++)
{
	c=a/b;
	sum=sum+c;
	d=a+b;
	b=a;
	a=d;
}	
printf("ǰ20��֮��Ϊ��%f\n",sum);
	system("pause");
	return 0;
}
