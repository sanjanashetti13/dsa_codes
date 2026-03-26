#include <iostream>
using namespace std;

bool func(int matrix [][4], int row, int col, int num){
    pair <int,int> p = {row,col};

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(matrix[i][j] == num){
                cout << p.first <<" ";
                cout << p.second <<endl;

                return 1;
            }
        }
    }
    return 0;

}

int main(){
    int mat[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        
    };
    int row = 3;
    int col = 4;
    int num = 87;

    func(mat, row, col, num);


    return 0;
}