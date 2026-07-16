//function overloading
#include <iostream>
using namespace std;

class print{
    public:
    int x = 9;
    int a = x; 
    void myprint(){
    cout << x <<endl;
    cout << "int" <<endl;
 }

 void myprint(char c){
    cout << c <<endl;
    cout << "Char" << endl;
 }

};

int main(){
    print p1;
    p1.myprint();
    return 0;
}