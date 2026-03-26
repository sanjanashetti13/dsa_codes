#include <iostream>
using namespace std;
#include <list>
#include<vector>

int main(){
list <int> l;

l.push_back(2);
l.push_front(3);
l.push_back(5);
l.push_front(6);
l.pop_back();


for(int i : l){
    cout << i << " ";
}
return 0;
}

