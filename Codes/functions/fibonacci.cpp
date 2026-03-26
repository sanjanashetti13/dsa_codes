// print all fibonacci series
// 0 1 1 2 3 5


#include <iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int b = 1;
    int nextTerm;

    if (n == 0){
        return 0;
    }
    
    if (n == 1){
        return 1;
    }

    for(int i = 1; i <= n; i++){

       cout << a << ',';
       nextTerm = a + b;
       a = b;
       b = nextTerm;

    
    }
return 0;

}

int main()
{
    int x;
    cout << "Enter num: ";
    cin>>x;
    fib(x);
    return 0;
}