// 1234   A B C D
// 1234   A B C D
// 1234   A B C D
// 1234   A B C D




#include <iostream>
using namespace std;

int main(){
    int n = 5;
    int m = 4;

    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for (int j = 1; j <= m; j++){
            cout<<" ";
            cout<<ch ;
            ch = ch + 1;
        }

        cout<<endl;
    }

}