
#include <stdio.h>
#include <math.h>
#define N 5
int main()
{ int a[N],i,temp;
printf("��ʼ����aΪ:\n");
for (i=0;i<N;i++)
scanf("%d",&a[i]);
printf("����a:\n");
for (i=0;i<N;i++)
printf("%4d",a[i]);
for (i=0;i<N/2;i++)            //ѭ���������ǽ��ԳƵ�Ԫ�ص�ֵ����
{ temp=a[i];
a[i]=a[N-i-1];
a[N-i-1]=temp;
}
printf("\n����������a:\n");
for (i=0;i<N;i++)
printf("%4d",a[i]);
printf("\n");
return 0;
}
