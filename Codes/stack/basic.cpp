#include <iostream>
#include <vector>
using namespace std;

class Stack{
    vector<int> v;
    public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size() - 1];
    }
    
    bool empty(){
        return v.size() == 0;
    }

};

int main(){

    Stack s;

    s.push(30);
    s.push(32);
    s.push(34);
    s.pop();
    s.top();

    while(!s.empty()){
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}
