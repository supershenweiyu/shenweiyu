#include <stdio.h>

void main() {
int m,n,p,q;
printf("请输入整数m,n的值:\n");
scanf("%d,%d,&m,&n");
p=m*n;
while(n!=0)
{
	q=m%n;
	m=n;
	n=q;
}
printf("最大公约数是:%d\n",m);
printf("最小公倍数是:%d\n",p/m);	
}
