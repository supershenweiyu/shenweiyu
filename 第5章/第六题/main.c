#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) 
{
double sum=0,n=1;
int i;
for(i=1;i<=20;i++)
{
	n=n*i;
	sum=sum+n;
}
printf("ֵΪ��%f\n",sum);	
	return 0;
}
