#include <iostream>
using namespace std;
#include <vector>
#include<map>

int main(){

    map <string,int> m;

    m["TV"] = 300;
    m["Fan"] = 100;
    m["Bulb"] = 500;

    for(auto i: m){
        cout << i.first << " " << i.second <<endl;
    }

    if(m.find("TV") !=m.end()){
        cout <<"found"<<endl;
    }

    return 0;
}