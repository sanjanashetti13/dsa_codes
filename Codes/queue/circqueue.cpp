#include <iostream>
using namespace std;
#include <vector>

class Node{
    public:
    int* arr;
    int cursize, cap;
    int f, r;
    
    Node(int size){
        cap = size;
        arr = new int[cap];
        cursize = 0;
        f = 0;
        r = -1;
    }

    void push(int val){
        if(cursize == cap){
            cout << "FULL"<<endl;
            return;
        }
        r = (r+1)%cap;
        arr[r] = val;
        cursize++;
     }

     void pop(){
        if(empty()){
            return;
        }
        f = (f+1)%cap;
        cursize--;
     }

    int front(){
        if(empty()){
            return -1;
        }
        return arr[f];
    }

     bool empty(){
        return cursize == 0;
     }

     void print(){
        for(int i = 0; i < cap; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
     }

};

int main(){

    Node n(3);
    n.push(2);
    n.push(1);
    n.push(3);
    n.pop();
    n.push(4);
    n.print();
    
    return 0;
}
