#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;
        Node(int val){
            this -> val = val;
            left = right = nullptr;
        }
    
};

static int index = -1;
Node* buildTree(vector <int> p){
    index++;
    if(p[index] == -1){
        return nullptr;
    }
    Node* root = new Node(p[index]); 
    buildTree(root -> left);
    buildTree(root -> right);
    return root;
}

void preorder(Node* root){
    if(root == null){
        return;
    }
    cout << root << endl;
    preorder(root -> left);
    preorder(root -> right);

    
}
int main(){
    vector <int> p = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = bulidTree(p);
    // cout << "preorder";
    // preORDER(root);
    // cout << endl;
    // cout << "Postorder";
    // PostORDER(root);
    // cout << endl;
    // cout << "Inorder";
    // InORDER(root);
    // cout << endl;
    levelORDER(root);
    return 0;
}