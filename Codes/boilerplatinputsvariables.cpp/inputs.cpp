#include <iostream>
using namespace std;

int main(){

    int price1;
    int price2;
    cout<<"Enter the Price1"<<endl;
    cin>>price1;

    cout<<"Enter the Price1"<<endl;
    cin>>price2;

    double sum = price1 * price2;

    cout<<!(price1>price2)<<endl;

    cout<<"Total Price is "<<sum<<endl;

    return 0;
}