// sum must be equal to taret
#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n = 5;
    int a[n] = {1,7,11,15,6};
    int target = 100;
    bool b = 0;
  
    for(int i = 0; i <= n; i++){
        for(int j = i + 1; j <= n; j++){

            if(a[i] + a[j] == target){
            cout << "The indexs of sums are: " << "[" << i << " " << j << "]"<<endl; 
            cout << a[i] << " " << a[j] <<endl;
                b = 1;
              }

        }

    }

    if ( b != 1){
        cout << "Not found";
    }

    return 0;
}