#include <iostream>
using namespace std;
#include <climits>


int main(){

    int n;
    int largest = INT_MIN;


    cout << "Enter number of nums: ";
    cin >> n;
    
    int arr[n];

    cout << "Enter numbers "<<endl;

    for( int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The array is: " <<endl;
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }

    for( int j = 0; j < n; j++){

        if(arr[j] > largest){
            largest = arr[j];
        }
    }

     cout << "Largest is : " << largest;

   return 0;

}