#include <iostream>
using namespace std;

int diagonal(int matrix[][3], int n){
    int sum = 0;

    for(int i = 0; i < n; i++){
        
        sum = sum + matrix[i][i];

        if(i != n - i - 1){
            sum = sum + matrix[i][n-i-1];
        }
    
    
    }
    
    

    return sum;
}

int main(){
    int m[3][3] = {
        {1,2,3},
        {4,5,6},
        {4,2,6}
       
    };
   int n = 3;
    cout << diagonal(m,n);
    return 0;

}