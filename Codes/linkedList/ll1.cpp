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

class List{
    Node* head;
    Node* tail;

    public:
    List(){
        head = tail = NULL;
    }

    void push_front(int val){ //O(1);
    Node* newnode = new Node(val);
    // Node newnode(val);
    
    if(head == NULL){
        head = tail = newnode;
        return;
    }
    else{
        newnode->next = head;
        head = newnode;
    }
    }

    void push_back(int val){ //O(1)
         Node* newnode = new Node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }

    void pop_front(){
        
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;
        delete temp;

    }

    void pop_back(){
        
        if(head == NULL){
            return;
        }
        Node* temp = head;
            while(temp -> next != tail){
                    temp = temp->next;
            }
            temp -> next = NULL;
            delete tail; //deletes the internal heap storage of this var not the name
            tail = temp;

        
    }    
    //print a LL
    void print(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data <<"\t";
        temp = temp ->next;
    }
    }

    
};

 


int main(){

    List ll;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);
    ll.push_back(8);
    ll.pop_front();
    ll.pop_back();
    ll.print();

    return 0;
}