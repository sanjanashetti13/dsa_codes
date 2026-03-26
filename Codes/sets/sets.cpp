#include<iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(2);

    cout << s.size() <<endl;
    cout << "lower bound: " << *(s.lower_bound(4)) <<endl; //returns 4 or just >4
    cout << "Upper bound: " << *(s.upper_bound(5)) <<endl;



    for(auto val : s){
        cout << val;
    }


    return 0;
}