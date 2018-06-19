#include <stdio.h>
int main()
{int upper=0,lower=0,digit=0,space=0,other=0,i=0;
char *p,s[20];
printf("请输入一行文字:  ");
while ((s[i]=getchar())!='\n') i++;
p=&s[0];
while (*p!='\n')
  {if (('A'<=*p) && (*p<='Z'))
     ++upper;
   else if (('a'<=*p) && (*p<='z'))
     ++lower;
   else if (*p==' ')
     ++space;
   else if ((*p<='9') && (*p>='0'))
     ++digit;
   else
     ++other;
   p++;
  }
printf("大写字母有:%d个     小写字母有:%d个",upper,lower);
printf("     空格有:%d个     数字有:%d个      其他有:%d个\n",space,digit,other);
return 0;
}
