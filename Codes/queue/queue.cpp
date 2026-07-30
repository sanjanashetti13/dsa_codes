#include <iostream>
using namespace std;
#include <vector>

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class queue{
    Node* front;
    Node* rear;

    public:
        queue(){
        front = rear = NULL;
        }
    void push(int data){
        Node* newnode = new Node(data);  
        if(empty()){
            front = rear = newnode;
        }
        rear -> next = newnode;
        newnode -> next = NULL;
        rear = newnode;

    }

    void pop(){
        if(empty()){
            return;
        }
        Node* temp = front;
        front = temp -> next;
        delete temp;
        
    }

    int fronti(){
        if(empty()){
            return -1;
        }
        return front -> data; 
    }

    bool empty(){
        return front == NULL;
    }





};

int main(){
    queue q;
    q.push(2);
    q.push(5);
    q.push(3);
    q.pop();
  

     
    while(!q.empty()){
        cout << q.fronti() << " ";
        q.pop();
    }
    cout << endl;

   

  

    return 0;
}