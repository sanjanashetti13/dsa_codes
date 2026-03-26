#include <iostream>
using namespace std;



// int reverse(int arr[], int sz) {
//    cout << "the array is: ";

//     for(int i = (sz-1); i >= 0; i-- ){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// -------------------------------------------------------------------------------------------


void reverse(int a[], int sz){
  
    int str = 0;
    int end = sz - 1;

    while (str < end){
     swap(a[str], a[end]);
        str++;
        end--;
    }

}


int main(){
    int a[] = {14,22,23,44};
    int s = 4;

    reverse(a, s);
    for(int i = 0; i < s; i++){
        cout << a[i] << " ";
    }

    return 0;
}