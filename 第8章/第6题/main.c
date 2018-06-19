#include <stdio.h>
int main()
{int length(char *p);
int len;
char str[20];
printf("请输入一个字符串:  ");
scanf("%s",str);
len=length(str);
printf("该字符串的长度为:%d.\n",len);
return 0;
}

int length(char *p)          
{int n;
 n=0;
 while (*p!='\0')
  {n++;
   p++;
  }
 return(n);
}
