#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class cList{
    public:
    Node* head;
    Node* tail;

    cList(){
        head = tail = NULL;
    }

    //insert at head
    void push_front(int val){
    Node* newNode = new Node(val);
        if(tail == nullptr){
            head = tail = newNode;
            tail -> next = newNode;
        }

        tail -> next = newNode;
        newNode -> next = head;
        head = newNode;

    }

    //insert at tail
    void push_back(int val){
    Node* newNode = new Node(val);
        if(tail == nullptr){
            head = tail = newNode;
            newNode -> next = head;
        }

        tail -> next = newNode;
        newNode -> next = head;
        tail = newNode;
    }

    //delete at head
    void pop_front(){
        if(head == nullptr){
            return;
        }
        Node* temp = head;
        tail -> next = head -> next;
        head = head -> next;
        delete temp; 
    }

    //delete at tail 
    void pop_back(){
        Node* temp = head;
        if(tail == nullptr){
            return;
        }
        else if(head == tail){
            delete head;
            head = tail = nullptr;
        }
        else{
        while(temp -> next != tail){
            temp = temp -> next;
        }
        temp -> next = head;
        delete tail;
        tail = temp;  
        }
    }

    


    void print(){
        if(head == nullptr){
            return;
        }
        cout << head -> data << "->";
        Node* temp = head -> next;
        while(temp != head){
            cout << temp -> data <<"->";
            temp = temp -> next;
        }
        cout << temp -> data<<endl;
       
        }



    
};

int main(){
    cList cl;
    cl.push_front(2);
    cl.push_front(4);
    // cl.push_front(9);
    // cl.push_back(8);
    // cl.pop_front();
    cl.pop_back();
    cl.print();

    return 0;
}