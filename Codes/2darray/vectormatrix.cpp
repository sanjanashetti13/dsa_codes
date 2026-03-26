#include <iostream>
using namespace std;
#include <vector>


int main(){
vector <vector <int>> mat = { {1,2,3} , {4,5,6,7}, {2,4,8}};

for(int i = 0; i < mat.size(); i++){
    for(int j = 0; j < mat[i].size(); j++){
        cout << mat[i][j];
    }
    cout << endl;
}

return 0;
}
