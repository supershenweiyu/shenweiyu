#include <stdio.h>
#include <math.h>
int main()
{int i,j,upp,low,dig,spa,oth;
char text[3][80];
upp=low=dig=spa=oth=0;
for (i=0;i<3;i++)
{ printf("�������%d��:\n",i+1);
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
printf("\��д��ĸ����Ϊ: %d\n",upp);
printf("Сд��ĸ����Ϊ: %d\n",low);
printf("���ָ���Ϊ: %d\n",dig);
printf("�ո����Ϊ: %d\n",spa);
printf("��������Ϊ: %d\n",oth);
return 0;
}
