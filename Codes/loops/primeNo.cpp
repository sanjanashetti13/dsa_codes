// prime number
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number"<<endl;
    cin>>n;

    int i=2;

    while(i<(n-1)){

        if((n%i)==0){
            cout<<"The number is not Prime"<<endl;
            exit(0);
        }

        else{
            i+=1;
        }

    }

    cout<<"The number is Prime"<<endl;

    return 0;
}