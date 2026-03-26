#include<iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparator(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true; //for same nums of 2nd digit
    else return false;

}

int main(){
vector<pair <int,int>> p = {{2,6},{4,5},{3,8}};
sort(p.begin(),p.end(),comparator);


for(auto i : p){

    cout << i.first<<i.second << " ";
    
}
cout << endl;

return 0;
}
