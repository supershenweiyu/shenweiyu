#include <stdio.h>

void main()
{
char x;
int a,b,c,d;
a=0;b=0;c=0;d=0;
for(;(x=getchar())!='\n';)
{
	if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
	a=a+1;
	else if(x>='0'&&x<='9')
	b=b+1;
	else if(x==32)
	c=c+1;
	else
	d=d+1;
}
printf("英文字母个数为：%d\n",a);
printf("数字个数为：%d\n",b);
printf("空格个数为：%d\n",c);
printf("其他字符个数为：%d\n",d);
}

