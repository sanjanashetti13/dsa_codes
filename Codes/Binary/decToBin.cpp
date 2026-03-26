//Decimal to Binary
#include <iostream>
using namespace std;

int main(){
    int dec;
    int bin;
    int temp = 0;
    int pow = 1;


    cout << "Enter num: ";
    cin >> dec;

    while (dec > 0){
        bin = dec % 2;
        dec = dec / 2;
        temp = temp + (bin * pow);
        pow = pow * 10;
       
    }
     cout << temp ;

    return 0;
}