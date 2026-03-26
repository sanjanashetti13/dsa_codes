#include <iostream>
#include <string>
using namespace std;


bool pallindrome(string a){
    int str = 0;
    int end = a.size()-1;

    while(str < end){
        if(a[str] != a[end]){
            return 0;
        }
        str++;
        end--;
    }

    return 1;
}


int main(){

 string a = "madam";

    if(pallindrome(a)){
    cout <<"It is pallindrome"<<endl;
    }
    else{
    cout <<"It is not pallindrome"<<endl;
 }

    return 0;
}


//1100122