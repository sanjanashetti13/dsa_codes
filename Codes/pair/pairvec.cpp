#include <iostream>
using namespace std;
#include <vector>

int main(){

    vector <pair<int,char>> v = {{1,'c'},{2,'b'},{4,'c'}};  

    v.push_back({5,'t'});
    v.emplace_back(5,'k');    //good time eff and used for inplace obj create

    for(pair<int,char>p : v){  //for(auto p:v)
        cout << p.first <<" " <<p.second<<" "<<endl;
    }


    return 0;
}