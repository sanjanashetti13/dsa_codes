#include <iostream>
using namespace std;

void twosum(int a[],int size, int target){
    bool found = 0;

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if( a[i] + a[j] == target){
                cout << i <<j << " ";
                found = 1;
                exit(0);
            }
        }
    }

    if(!found){
        cout << "Not found";
    }
    
   
}


int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int t = 7;

    twosum(arr,size,t);

    return 0;

}