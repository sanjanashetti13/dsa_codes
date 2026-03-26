#include <iostream>
using namespace std ;
#include <vector>

int main(){

    vector <char> vec;
    vec.push_back('A');
    vec.push_back('B');
    vec.push_back('C');

    //display elements
    cout << "The elements are: ";

    for(char c : vec)
    { 
    cout << c;
    }

    //size of vector
    cout << "\nSize of vector: " << vec.size();

    //pop_back

    vec.pop_back();
    cout << "\nAfter the pop back ";
    for(char d : vec){
        cout << d;
    }

    //front


    cout << "\n The front of vector: " << vec.front();

    //back

    cout << "\n The back of the vector: " << vec.back();

    //at

    cout << "\n The vect at 2nd position is: " << vec.at(1);

   

    //Capacity of vec
    cout << "\n The capacity of vector: " <<vec.capacity();

     return 0;

}
     





