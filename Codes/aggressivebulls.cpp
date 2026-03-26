#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

bool isValid(vector <int> arr , int n, int c, int maxalloc){

    int bulls = 1;
    int lastStallPos = arr[0];


    for(int i = 1; i < n ; i++){
        if(arr[i] - lastStallPos >= maxalloc){
            bulls++;
            lastStallPos = arr[i];    
        }

        if(bulls == c){
            return true;
        }
    }

      return false;

}



int getDis(vector <int> arr , int n, int c){

    sort(arr.begin() , arr.end());
    
    int str = 1, end = arr[n-1] - arr[0] , ans = -1;

    while(str <= end){

        int mid = str + (end -str)/2;

         if(isValid(arr,n,c,mid)){
            ans = mid;
            str = mid + 1;

        }
        else{
            end = mid - 1;
        }
    }
        return ans;
    

}



   int main(){
    int n = 5;
    int c = 3;
    vector <int> arr = {1,2,8,4,9};
    cout << getDis(arr, n, c) <<endl;   
    return 0;
   }