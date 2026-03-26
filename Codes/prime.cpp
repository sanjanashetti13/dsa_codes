#include <iostream>
using namespace std;

int prime(int num){
    for(int i = 2; i*i <= num; i++){
        if(num % i == 0){
           
        return 0;
    }
 
}
   return 1;
}

int main(){
    int n = 5;
    if(prime(n)){
        cout << "Prime";
    }
    else{
        cout << "not prime";
    }
    return 0;
}
