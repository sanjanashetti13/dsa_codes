#include <stdio.h>

int fact(int n);
int fact(int n){
    if(n == 0){
        return 1;
    }
    int factorial = n * fact(n-1);
}

int main(){
    int a = 5;
    printf("Factorial is %d", fact(a));

    return 0;
}