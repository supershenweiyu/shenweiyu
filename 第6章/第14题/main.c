#include <stdio.h>
void main()
{ int i,result;
char s1[100],s2[100];
printf("�������һ���ַ���S1:");
gets(s1);
printf("\������ڶ����ַ���S2:");
gets(s2);
i=0;
while ((s1[i]==s2[i]) && (s1[i]!='\0'))i++;
if (s1[i]=='\0' && s2[i]=='\0')
result=0; 
else
result=s1[i]-s2[i];
printf("\n����Ľ��Ϊ:%d.\n",result);
}
