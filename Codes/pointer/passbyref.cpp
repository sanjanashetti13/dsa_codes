#include<iostream>
using namespace std;

void alias(int &b){

    b = 20;
     
}

int main(){

    int a = 10;
    alias(a);

    cout << a;

    return 0;
}











                                                                        
























