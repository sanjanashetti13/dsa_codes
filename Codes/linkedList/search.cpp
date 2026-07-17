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
    public:
    Node *head;
    Node *tail;
    
    List(){
        head = tail = NULL;
    }
    void push_front(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
            return;
        }
        newnode -> next = head;
        head = newnode;

    }

    int search(int key){
        Node* temp = head;
        int index = 0;
        while(temp!=NULL){
        if(temp -> data == key){
             return index;
        }
       
        temp = temp -> next;
        index++;
    }

        return -1;
    }

};

int main (){

    List ll;
    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    
    cout << ll.search(4);
    return 0;
}