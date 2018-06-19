#include <stdio.h>
#include <math.h>
int main()
{int i,j,upp,low,dig,spa,oth;
char text[3][80];
upp=low=dig=spa=oth=0;
for (i=0;i<3;i++)
{ printf("请输入第%d行:\n",i+1);
gets(text[i]);
for (j=0;j<80 && text[i][j]!='\0';j++)
{if (text[i][j]>='A'&& text[i][j]<='Z')
upp++;
else if (text[i][j]>='a' && text[i][j]<='z')          low++;
else if (text[i][j]>='0' && text[i][j]<='9')          dig++;
else if (text[i][j]==' ')
spa++;
else
oth++;
}
}
printf("\大写字母个数为: %d\n",upp);
printf("小写字母个数为: %d\n",low);
printf("数字个数为: %d\n",dig);
printf("空格个数为: %d\n",spa);
printf("其他个数为: %d\n",oth);
return 0;
}
