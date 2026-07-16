#include <stdio.h>
void fun(int a , int b, int *sum, int *prod, int *div);
void fun(int a , int b, int *sum,int *prod,int *div){
    *sum = a+b;
    *prod = a*b;
    *div = a/b;
}

int main(){
    int a = 10;
    int b = 5;
    int sum, prod, div;
    
    fun(a , b, &sum, &prod, &div);

    printf("Sum = %d\n", sum);
    printf("prod = %d\n", prod);
    printf("div = %d\n", div);

    return 0;
}