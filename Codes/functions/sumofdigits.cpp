// /145 -> 1+4+5

#include <iostream>
using namespace std;


int sumdigi(int num)
{
    int lastdigit;
    int sum = 0;

    while ( num > 0){
        lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;

    }
   



    return sum;


}




int main(){

    int y = 142;
    cout<<sumdigi(y)<<endl;




    return 0;
}