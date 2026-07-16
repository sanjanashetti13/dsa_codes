//static key word
#include <iostream>
using namespace std;

class A{
    public:
    void print()
    {
        static int k = 0;
        cout << k <<endl;
        k++;
    }
    
};

int main()
{
    A obj1;
    obj1.print();
    obj1.print();

    return 0;
}