#include <stdio.h>
#include <math.h>
int fib(int n);
int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibN = fib(n-1)+fib(n-2);
    return fibN;
}


int main(){

    int n = 3;
    fib(n);
    printf("%d", fib(n));
    return 0;
}