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
printf("球共经过了%f米\n",sn);
printf("球第10次反弹的高度为：%f\n",hn);
system("pause");
return 0;
}
