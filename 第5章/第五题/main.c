#include <stdio.h>
#include <math.h>

void main() 
{
int n,a,sn,sa;
double m;
printf("������a,n:\t");
scanf("%d,%d",&a,&n);
for(m=0,sn=0,sa=a;m<=(n-1);)
{
	sn=sn+sa;
	sa=sa*10+a;
	m++;
}
printf("��ʽ�ӵ�ֵΪ��%d",sn);
}
