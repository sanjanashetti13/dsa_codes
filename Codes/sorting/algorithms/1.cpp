#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
vector <int> v = {2,6,4,5};

sort(v.begin(),v.end(), greater <int>());

for(int i : v){

    cout << i;
    
}
cout << endl;

return 0;
}
