// even numbers from 1 to n 
#include <iostream>
using namespace std;

int main(){
    int r=5;
    int c=6;

    for(int i=1; i<=r ; i++){  //for no of columns
        for(int i=1; i<=c; i++){ //for no of rows
            cout<<"* "; //end rows
        }   
     cout<<endl;  //end columns
    }

     return 0;
}

