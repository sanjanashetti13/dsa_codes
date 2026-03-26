#include <iostream>
using namespace std;
#include <vector>

int bs(vector <int> arr, int target){

    int n = arr.size();
    int str = 0;
    int end = n-1;
    int mid;

   
    while(str <= end){

        mid = str + (end - str)/2;

        if(target < arr[mid]){
            end = mid - 1;
        }

        else if ( target > arr[mid] ){
            str = mid + 1;
    
        }

        else{
            return arr[mid];
        }


    }


    return -1;


}

int main(){

    vector <int> a {2,3,4,5,8};
    int n = 5;
    int t = 2;

    int result = bs(a,t);

    if(result == -1){

        cout << "No matches!"<<endl;

    }

    else{
        cout << "Found!!" <<endl;
    }



    return 0;
}