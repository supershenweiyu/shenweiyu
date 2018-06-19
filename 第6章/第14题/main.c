#include <stdio.h>
void main()
{ int i,result;
char s1[100],s2[100];
printf("请输入第一个字符串S1:");
gets(s1);
printf("\请输入第二个字符串S2:");
gets(s2);
i=0;
while ((s1[i]==s2[i]) && (s1[i]!='\0'))i++;
if (s1[i]=='\0' && s2[i]=='\0')
result=0; 
else
result=s1[i]-s2[i];
printf("\n输出的结果为:%d.\n",result);
}
