#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for(int i =0; i< n; i++){

        cin >> arr[i];
    }

    for(int j = 0; j < n; j++){
        cout << arr[j] << " ";
    }

    for( int k = 0; k< n; k++){
        if( arr[k] < smallest){
          smallest = arr[k];
          
    }
    }

    for(int k =0; k<n; k++){
        if( arr[k] > largest ){
            largest = arr[k];
        }
    }
    cout << "The largest num : " << largest;



    cout << "\nthe smallest num: " << smallest << " ";
    for(int l = 0; l<n; l++){

        if( arr[l] == smallest){
            cout << "\nthe smallest index: " << l;

        }

        if (arr[l] == largest ){
            cout << "\nThe largest index is: " << l;
        }
        

    }
   


    

    return 0;
}