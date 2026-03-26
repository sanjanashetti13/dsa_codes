#include <iostream>
using namespace std;


int main(){
int c = 100;
int* ptr = &c;

float b = 12.65;
float *p = &b ;


// cout << c << endl;
// cout << ptr << endl;
// cout << &ptr<<endl;

// cout << &b << endl;

// cout << p <<endl;

int ** ptr2 = &ptr;

// cout << ptr2 << endl;

// cout << *(&c) << endl;

// int ** ptr2 = &ptr;
// cout << ptr <<endl;
// cout << &ptr <<endl;
// cout << ptr2<<endl;
// cout << *(*(ptr2));


//NULL pointer

int ** ptr3 = NULL;
cout << &ptr3;

return 0;
}

