//sum of nos 1 to n

#include <iostream>
using namespace std;

int sum(int n){
    int add=0;
    for(int i=1; i<=n; i++){
        add=add+i;
    }

    return add;

}


int main()
{   
    int x;
    cout<<"Enter the number: ";
    cin>>x;

    cout <<"The sum is: "<<sum(x)<<endl;
    return 0;
}