#include<iostream>
#include <climits>
using namespace std;

int maxrow(int matrix[][4], int row, int col){
    int rowsum = INT_MIN;

    for(int i = 0; i < row; i++){
        int sum = 0;
        for(int j = 0; j < col; j++){
           sum = sum + matrix[i][j];
        }
        rowsum = max(rowsum, sum);
    }

    return rowsum;
}

int main(){
    int r = 4;
    int c = 4;
    int mat[4][4] = {
        {1,2,3,4},
        {13,14,15,16},
        {9,10,11,12},
        {5,6,7,8}
    };
    cout << maxrow(mat,r,c);
    return 0;
    
}
