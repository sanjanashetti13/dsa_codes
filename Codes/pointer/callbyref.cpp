#include<iostream>
using namespace std;

void ChangeA(int *ptr){

    *ptr = 20;
}

int main(){

    int a = 10;
    
    ChangeA(&a);

    cout << a;


    return 0;
}