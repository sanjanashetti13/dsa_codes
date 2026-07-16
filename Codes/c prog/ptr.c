#include <stdio.h>

int main(){
    int a = 23;
    int *p = &a;
    int _age = *p;

    //printf("%d\n", _age);
    printf("%d\n", p);
    printf("%d\n", &a);
    printf("%u\n", a);
    printf("%u\n", p);
    printf("%u\n", &a);




    return 0;
}