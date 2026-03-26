// //factorial


#include <iostream>
using namespace std;

int factorial(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int main() {
    cout << "Enter a number: ";
    int x;
    cin >> x;

    if (x < 0) {
        cout << "Invalid Number" << endl;
    } else {
        cout << "The factorial of " << x << " is " << factorial(x) << endl;
    }

    return 0;
}
