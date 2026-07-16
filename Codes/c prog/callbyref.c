#include <stdio.h>
void swap (int *a, int *b);

void swap (int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int m = 10;
    int n = 20;

    printf("m = %d\n", m);
    printf("n = %d\n", n);

    swap(&m,&n);
    printf("after swap\n");
  
    printf("m = %d\n", m);
    printf("n = %d\n", n);
        
    return 0;
}