#include <stdio.h>
int main()
{int upper=0,lower=0,digit=0,space=0,other=0,i=0;
char *p,s[20];
printf("������һ������:  ");
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
printf("��д��ĸ��:%d��     Сд��ĸ��:%d��",upper,lower);
printf("     �ո���:%d��     ������:%d��      ������:%d��\n",space,digit,other);
return 0;
}
