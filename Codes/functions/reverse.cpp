#include<iostream>
using namespace std;

void reverse(int num){
    int rev = 0;
    int d;
    d = num % 10;
    rev = (rev * 10) + d;
    num = num / 10;
    //print
    while(rev != 0){
    cout << rev;
    }
}

int main(){
    int n = 678;
    reverse(n);
    return 0;
}