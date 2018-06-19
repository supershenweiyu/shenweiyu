#include <stdio.h>
int main()
{ char s1[60],s2[30];
int i=0,j=0;
printf("请输入第一个字符串:");
scanf("%s",s1);
printf("请输入第二个字符串:");
scanf("%s",s2);
while (s1[i]!='\0')
i++;
while(s2[j]!='\0')
s1[i++]=s2[j++];
s1[i]='\0';
printf("\n连接后的字符串为:%s\n",s1);
return 0; 
}
