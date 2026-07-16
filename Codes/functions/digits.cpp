#include <iostream>
using namespace std;

// int count (int num){
//     int count = 0;
//     int d;
  
//     while(num > 0){
//     d = num % 10;
//     count++;
//     num = num /10;
    
//     }

//     return count;
//     }

void print (int num){
    
    while(num != 0){
       int d = num % 10;
       cout << d <<endl;
        num = num /10;
    }
}


int main(){
    int n = 7032;

   print(n);
    return 0;
}