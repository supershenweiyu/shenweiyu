#include <stdio.h>
#include <math.h>

int main() {
double sn=100,hn=sn/2;
int n;
for(n=2;n<=10;n++)
{
	sn=sn+2*hn;
	hn=hn/2;
}
printf("�򹲾�����%f��\n",sn);
printf("���10�η����ĸ߶�Ϊ��%f\n",hn);
system("pause");
return 0;
}
