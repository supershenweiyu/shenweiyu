
#include <stdio.h>
#include <math.h>
#define N 5
int main()
{ int a[N],i,temp;
printf("初始数组a为:\n");
for (i=0;i<N;i++)
scanf("%d",&a[i]);
printf("数组a:\n");
for (i=0;i<N;i++)
printf("%4d",a[i]);
for (i=0;i<N/2;i++)            //循环的作用是将对称的元素的值互换
{ temp=a[i];
a[i]=a[N-i-1];
a[N-i-1]=temp;
}
printf("\n倒序后的数组a:\n");
for (i=0;i<N;i++)
printf("%4d",a[i]);
printf("\n");
return 0;
}
