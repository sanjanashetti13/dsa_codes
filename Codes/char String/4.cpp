
//character string doesnt print str after a space

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char str[100];

    cout << "Enter string" <<endl;
    //cin >> str;
    
    cin.getline(str, 100, '$');

    cout << str <<endl;

    return 0;
}