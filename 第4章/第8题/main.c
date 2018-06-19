#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
float x;
printf("请输入成绩:\t");
scanf("%f",&x);
if(x>=90) printf("成绩为A\n");
else if(x>=80) printf("成绩为B\n");
else if(x>=70) printf("成绩为C\n");
else if(x>=60) printf("成绩为D\n");
else printf("成绩为E\n");
}
