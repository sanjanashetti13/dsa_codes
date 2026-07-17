#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
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

    void push_front(int val){
        Node* newnode = new Node(val);

        if(head == NULL){
            head = tail = newnode;
            return;
        }
        newnode -> next = head;
        head = newnode;

    }



    void insert(int val, int pos){
        Node* newnode = new Node(val);
        Node* temp;

        if(pos == 0){
            push_front(val);
            return;
        }
        if(pos < 0){
            cout << "ERROR"<<endl;
            return;
        }

        for(int i = 0; i < pos - 1; i++){
            temp = temp -> next;
        }
        newnode -> next =  temp->next;
        temp->next = newnode;
        
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp -> next;
        }
        cout << "NULL";
    }

};

int main(){
    List l;
    l.push_front(5);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);

    l.insert(0, 0);
    l.print();



    return 0;
}

