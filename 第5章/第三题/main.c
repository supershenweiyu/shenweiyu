#include <stdio.h>

void main() {
int m,n,p,q;
printf("����������m,n��ֵ:\n");
scanf("%d,%d,&m,&n");
p=m*n;
while(n!=0)
{
	q=m%n;
	m=n;
	n=q;
}
printf("���Լ����:%d\n",m);
printf("��С��������:%d\n",p/m);	
}
