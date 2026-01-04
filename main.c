#include<stdio.h>
#include "header.h"

int inputnum1(int a);
int inputnum2(int b);

int main(){
    int a,b;
    a = inputnum1(a);
    b = inputnum2(b);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}