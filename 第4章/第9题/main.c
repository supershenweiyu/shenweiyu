#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
int num,x, a,b,c,d,e,place;
printf("请输入一个正整数(0-99999):\t");
scanf("%d",&num);
if(num>9999)
  place=5;
else if(num>999)
  place=4;
else if(num>99)
  place=3;
else if(num>9)
  place=2;
else place=1;
printf("位数为:%d\t",place);
printf("每位数字为:");
e=num/10000;
d=(num-e*10000)/1000;
c=(num-e*10000-d*1000)/100;
b=(num-e*10000-d*1000-c*100)/10;
a=(num-e*10000-d*1000-c*100-b*10);
switch(place)
{
case 5:
{
	printf("%d,%d,%d,%d,%d",e,d,c,b,a);
	printf("反序数字为：");
	printf("%d,%d,%d,%d,%d",a,b,c,d,e); 
}
	break;
case 4:
{
	printf("%d,%d,%d,%d",d,c,b,a);
	printf("反序数字为：");
	printf("%d,%d,%d,%d",a,b,c,d); 
}
	break;	
case 3:
{
	printf("%d,%d,%d",c,b,a);
	printf("反序数字为：");
	printf("%d,%d,%d",a,b,c); 
}
	break;
case 2:
{
	printf("%d,%d",b,a);
	printf("反序数字为：");
	printf("%d,%d",a,b); 
}
	break;
case 1:
{
	printf("%d",e);
	printf("反序数字为：");
	printf("%d",a); 
}
	break;
}
}
