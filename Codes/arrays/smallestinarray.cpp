#include <iostream>
using namespace std;
#include <climits>

int main(){
    int num = 5;
    int arr[num] ={4,2,3,5,7};
    int count = 0;
    int temp;
    int smallest = INT_MAX;

    for(int i = 0; i < num; i++){

        if(arr[i] < smallest){
            smallest = arr[i];
        }

    }

    cout << "The smallest is : " << smallest;

    return 0;
}
