#include <iostream>
using namespace std;
void selectsort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){
        int smallestindex = i; 
        for(int j = i + 1;  j < n; j++){

            if(arr[j] < arr[smallestindex]){
                smallestindex = j;
            }

        }

        swap(arr[i], arr[smallestindex]);

    }

}

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout <<arr[i] << " ";
    }
}

int main(){

    int a[] = {4,1,5,2,3};
    int n = 5;

    selectsort(a,n);
    print(a,n);

}