#include <iostream>
using namespace std;

int bindec(int num){
    int temp;
    int pow = 1;
    int dec = 0;

    while(num > 0)
    {
        temp = num % 10;   //take last digit of num 

        temp = temp * pow;  //last digit * 2^0
        dec = dec + temp;   //sum of it

        num = num /10;     //num without its last digit
        pow = pow * 2;    //inc powers
        
    }

    return dec;
}

int main()
{
    int n;
    cout << "enter num: ";
    cin >> n;
    

    cout << "The Decimal of the num is: " << bindec(n);
    return 0;
}