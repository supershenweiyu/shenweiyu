#include <stdio.h>
#include <math.h>

int main() {
int day=9,a=0,b=1;
while(day>0)
{
	a=(b+1)*2;
	b=a;
	day--;
}	
	printf("第一天摘桃数为：%d\n",a);
	return 0;
}
