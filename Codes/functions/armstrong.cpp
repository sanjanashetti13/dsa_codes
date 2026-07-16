#include <iostream>
using namespace std;


bool armstrong (int num){
    int s = 0;
    int copyN = num;
    
    while(num != 0){
    int d = num % 10;
    s = s + d*d*d;
    num = num /10;
    }
    return s == copyN;
    
}

int main(){
    int n = 1532;

    if(armstrong(n)){
        cout << "is Armstrong";
    }
    else{
        cout << "not arms";
    }
    return 0;
}