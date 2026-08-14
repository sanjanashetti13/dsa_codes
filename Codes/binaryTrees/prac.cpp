#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
    
    Node(int data){
        val = data;
        left = right = NULL;
    }
};

int main(){
    Node*  root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);

    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);

    root -> right -> right = new Node(6);
     cout << root->val << endl;

    return 0;
}