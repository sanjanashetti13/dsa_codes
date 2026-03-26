#include <iostream>
using namespace std;

int pairsum(int n, int a[] ,int target){

    int str = 0;
    int end = n-1;
    int ps;


    while(str < end){

        ps = a[str]+ a[end];
        
        if(ps > target){
            end --;
        }

        else if( ps < target){
            str ++;

        }

        else{
            cout << str << " " << end;
            exit(0);
        }


    }

  return 0;

}


int main(){
    int n = 5;
    int arr[n] = {2,3,5,6,7}; 
    int t = 8;


    pairsum(n, arr , t);


    return 0;




}
