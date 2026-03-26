//linear search
//arr [] {4,2,7,1,2,5}  target 8



#include <iostream>
using namespace std;

int main()
{
    int n;
    int num;

    cout << "Enter the no of elements: ";
    cin >> n;
    int arr[n];
    bool found = 0;



    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The nums are: ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\nEnter the num to be searched: ";
    cin >> num;



    for(int j = 0; j < n; j++){
        if(arr[j] == num){
        cout << "\nThe position at which num is found: " << j;
         found = 1;
        break;
        }

        
       
    }

    if(!found){
        cout << "not found";
    }

    return 0;
}