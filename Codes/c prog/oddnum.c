#include<stdio.h>

void rev(int arr[], int n);
void rev(int arr[], int n){
    for(int i = n-1; i >= 0; i--){
        int k = n;
        arr[k] = arr[i];
        printf("%d \t", arr[k]);
        k--;
    }
}



int main()
{
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    rev(a,n);
    return 0;
}
