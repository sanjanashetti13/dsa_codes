// arr = { 2,3,4,5,6}
// target = 9
// output = {2,3}



#include <iostream>
using namespace std;
#include <vector>


vector <int> two_sum(vector <int> arr , int target){

    for(int i = 0; i < arr.size(); i++){
        for( int j = i+1; j < arr.size(); j++){
            for(int z = j+1; z< arr.size(); z++){

            if( arr[i] + arr[j] + arr[z] == target){
                return {i , j, z};
            }
        }
        }
    }

    return {-1,-1, -1};
};

int main(){
    vector <int> a {1,2,3,4,5};
    int t = 9;

    cout << " the indices are: " <<endl;
    vector <int> c = two_sum(a,t);

    cout << c[0] <<" "<<c[1] << " " << c[2];

     return 0;

}