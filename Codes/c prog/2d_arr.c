#include <stdio.h>
void table(int a[][10], int row, int col, int num);
void table(int a[][10], int row, int col, int num){
    for(int i = 1; i <= col; i++){
        a[row][i] = num * i;
        printf("%d\n", a[row][i]);
    }
}

int main(){
    int r[1][10];
    table(r, 0, 10, 2 );
    return 0;
}