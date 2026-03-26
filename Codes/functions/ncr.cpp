// 1) nCr = n! / (n-r)! r!


#include <iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++){
        fact = fact * i;
    }
    return fact;
}

int comb(int n, int r){


    int c = (fact(n))/(fact(n-r)*fact(r));
    return c;

}


int main(){


    int x;
    int y;
    int z;
    cout << "Enter n: ";
    cin>>x;
    cout << "Enter r: ";
    cin>>y;
    cout << "Combination of " << x << "C" << y << " is " << comb(x,y);
    return 0;
}