#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class List{
    public:
    Node* head;
    Node* tail;

    List(){
        head = tail = NULL;
    }

    void push_front(int val){
    Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        head -> prev = newNode;
        newNode -> next = head;
        head = newNode;
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        tail -> next = newNode;
        newNode -> prev = tail;
        tail = newNode; 
    }

    void pop_front(int val){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head -> next;
        head -> prev = NULL;
        delete temp;

    }

    void pop_back(int val){
        if(head == NULL){
            return;
        }
        Node* temp = tail;
        tail = tail -> prev;
        tail -> next = NULL;
        delete temp;
    }

    void print(){
        Node * temp = head;
        cout << "NULL<=>";
        
        while(temp != nullptr){
            cout << temp ->data << "<=>";
            temp = temp -> next;
            
        }
        cout << "NULL";
    }



};

int main(){
    List ll;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.pop_front(3);
    ll.pop_back(4);
    ll.push_front(2);
    ll.push_front(3);
    ll.print();

}