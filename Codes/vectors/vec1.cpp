#include <iostream>
using namespace std;
#include <vector>

int main(){

    cout << "1st vector\n";
    vector<int>vec(5,3);
    for(int i : vec){
    cout << vec[i] << " ";
    }


   cout << "\n2nd vector\n";
    vector <int> vect = {5,4,3,8};

    for(int i : vect){
        cout << i << " ";
    }

   


    cout << "\n3rd vector\n";
    vector <int> vecto = {4,6,8,3};
    cout << vecto[0];

   

    cout << "\nSize Finding";
    vector <int> vects = {1,1,2,3};
    cout << "\nVector Size: " << vects.size();
    
    
 return 0;

}