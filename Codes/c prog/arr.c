#include <stdio.h>


int main(){
    int n = 3;
    int arr[n];
    float amt[n];
    

    printf("Enter the nums:\n");
    for(int i = 0; i < n; i++){
    printf("Enter %d num:\t", i+1);
    scanf("%d", &arr[i]);
    
    }
    
    for(int i = 0; i < n; i++){
    amt[i] = arr[i] + arr[i]*0.18;
    printf("the %d element is %f\n", i, amt[i]);
    }
    
    return 0;
}