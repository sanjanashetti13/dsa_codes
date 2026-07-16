#include <stdio.h>

void max(int a, int b, int *maxi);
void max(int a, int b, int *maxi){

    if(a > b){
        *maxi = a;
    }
    else{
        *maxi = b;
    }
}

int main(){
    int m = 2;
    int n = 5;
    int maxi;

    max(m, n, &maxi);
    printf("max num is %d", maxi);
    return 0;

}