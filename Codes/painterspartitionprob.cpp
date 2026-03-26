#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>


using namespace std;

bool isValid(vector <int> arr, int m, int n, int maxvalue){

    int painters = 1;
    int walls = 0;

    for(int i = 0; i < n; i++){

    if(arr[i] > maxvalue){
        return 0;
    }

    if(arr[i] + walls <= maxvalue){
        walls = walls + arr[i];
    }

    else{
        painters++;
        walls = arr[i];
    }

    }

    return painters > m ? false: true;


}

int paintersprob(vector <int> arr, int m, int n){

    int maximum = INT_MIN;
    int sum = 0;


    if(m > n){
        return -1;
    }


    for(int i = 0; i < n; i++ ){

        sum = sum + arr[i];
        maximum = max(maximum,arr[i]);
        

    }

    int str = maximum;
    int end = sum;
    int ans = -1;

    while(str <= end){

        int mid = str + (end - str)/2;

        if(isValid(arr,m,n,mid)){

            ans = mid;
            end = mid - 1;
        }

        else{
            str = mid + 1;
        }

        
    }

    return ans;
}

int main(){

    vector <int> a = {40,30,10,20};
    int n = 4;
    int m = 2;

    cout << paintersprob(a,m,n);
    return 0;

}