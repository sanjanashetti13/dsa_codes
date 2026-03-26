#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5,3,7,8};

    for(int i = 0; i <= 3; i++){

        cout << arr[i] <<endl;
    }
    
    cout << "The size of array: "<< sizeof(arr);

    return 0;
}