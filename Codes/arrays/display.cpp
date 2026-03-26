#include <iostream>
using namespace std;

int main(){
    int num = 3;
    int arr[num];

    
    for(int i = 0; i < num; i++){
        cout << "ENter digits to array: ";
        cin >> arr[i];
    
    }

    for(int i = 0; i < num; i++){
        cout << "The array is: ";
        cout << arr[i] << " ";
    
    }






    return 0;
}