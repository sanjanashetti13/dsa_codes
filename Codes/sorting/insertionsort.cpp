#include <iostream>
using namespace std;

void insertion(int arr[] , int n){

    for(int i = 0; i < n; i++){
        int curr = arr[i];
        int prev = i-1;

        while(prev >= 0 && arr[prev] > curr){

            arr[prev + 1] = arr[prev];
            prev --;
            
        }
        arr[prev + 1] = curr;
    }
}

void print(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}

int main(){
    int a[] = {5,2,3,1,4};
    int n = 5;

    insertion(a,n);
    print(a,n);

    return 0;
}