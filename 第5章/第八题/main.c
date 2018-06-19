#include <stdio.h>
#include <math.h>

int main() {
int a,b,c,s;
for(a=1;a<10;a++)
{
	for(b=0;b<10;b++)
	{
		for(c=0;c<10;c++)
		{
			s=100*a+10*b+c;
			if(s==(a*a*a+b*b*b+c*c*c))
			{
				printf("水仙花数为：%d\n",s);
			}
		}
	}
}	
getchar();
	return 0;
}
