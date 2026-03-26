#include <iostream>
using namespace std;

int sumofnums(int x, int y){
    int sum;
        sum = x + y;

        return sum;

}


int minofnums(int a, int b){
    int min;
    if(a < b){
        min = a;
    }

    else{
        min = b;
    }

        return min;
    
    }





int main(){
    cout<<"The Addition is: "<<sumofnums(5,8)<<endl;
    cout<<"the minimum is: "<<minofnums(5,8)<<endl;
    return 0;
    
}