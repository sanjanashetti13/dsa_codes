/*
Given an array of integers arr[] and an integer k, find the maximum possible sum
 among all contiguous subarrays of size exactly k.
A subarray is a sequence of consecutive elements from the
original array. Return the maximum sum that can be obtained from any such subarray of length
*/

#include <iostream>
using namespace std;


int twosum(int arr[], int k){
    int str = 0;
    int cursum = 0;
    int maxsum = 0;

    for(int i = 0; i < k; i++){
        if()
    }
    cursum = arr[str] + arr[str+1];
        if( cursum > maxsum)
        {
            maxsum = cursum;
        }

        str++;
    }


    return maxsum;
}


int main(){
    int a[] = {2,3,4,5,6};
    int k = 3;
    cout << twosum(a,k);

    return 0;


}