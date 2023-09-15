#include <stdio.h>
#define PI 3.14
#define AREA(x)(PI*x*x);
#define ADD(x,y)(x+y);
int main(){
    printf("PI=%f\n",PI);
    double a = AREA(10);
    printf("area=%f\n",a);
    int sum = ADD(10,19);
    printf("sum=%d\n",sum);
    return 0;
}