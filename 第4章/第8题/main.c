#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
float x;
printf("������ɼ�:\t");
scanf("%f",&x);
if(x>=90) printf("�ɼ�ΪA\n");
else if(x>=80) printf("�ɼ�ΪB\n");
else if(x>=70) printf("�ɼ�ΪC\n");
else if(x>=60) printf("�ɼ�ΪD\n");
else printf("�ɼ�ΪE\n");
}
