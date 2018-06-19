#include <stdio.h>
#include <math.h>

void main() 
{
int n,a,sn,sa;
double m;
printf("请输入a,n:\t");
scanf("%d,%d",&a,&n);
for(m=0,sn=0,sa=a;m<=(n-1);)
{
	sn=sn+sa;
	sa=sa*10+a;
	m++;
}
printf("该式子的值为：%d",sn);
}
