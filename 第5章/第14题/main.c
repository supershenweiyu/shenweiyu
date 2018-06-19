#include <stdio.h>
#include <math.h>

void main() {
double x1,x2,f,f1;
x2=1.5;
do{
x1=x2;
f=2*x1*x1*x1-4*x1*x1+3*x1-6;
f1=6*x1*x1-8*x1+3;
x2=x1-f/f1;
}while(fabs(x1-x2)>=1e-5);
printf("原方程的根为：%5.2f\n",x2);

}
