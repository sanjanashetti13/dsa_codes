#include <iostream>
using namespace std;

int fibo(int n){



    int a = 0;
    int b = 1;
    int next;

    for( int i = 1; i <= n; i++ ){
        cout << a <<',';
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}


    int main(){
        int x;
        cout << "Enter num: ";
        cin >> x;
        cout << "The Fibonacci Series is: "<<endl;
        fibo(x);

        return 0;
    }




