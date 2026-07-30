#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
        Node(int value){
            data = value;
            left = right = nullptr;
        }
};


Node* bulidTree(vector<int> preorder){
    
    static int index = -1;
    index++;
    if(preorder[index] == -1){
        return nullptr;
}
    
    Node* root = new Node(preorder[index]);
    root -> left = bulidTree(preorder);
    root -> right = bulidTree(preorder);
    return root;
}
void preORDER(Node* root){
    if(root == nullptr) {
        return;
    }
    cout << root->data <<endl;
    preORDER(root -> left);
    preORDER(root -> right);
}

void InORDER(Node* root){
    if(root == nullptr) {
        return;
    }
    
    InORDER(root -> left);
    cout << root->data <<endl;
    InORDER(root -> right);
}

void PostORDER(Node* root){
    if(root == nullptr) {
        return;
    }
    
    PostORDER(root -> left);
    PostORDER(root -> right);
    cout << root->data <<endl;

}

void levelORDER(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(nullptr);
    while(!q.empty()){
        Node* cur = q.front();
        q.pop();
        if(cur == nullptr){
            if(!q.empty()){
                cout << endl;
                q.push(NULL);
                continue;

            }
            else{
                break;
            }

        }
        cout << cur -> data <<" ";
    
    if(cur->left != nullptr){
        q.push(cur -> left);
    }

    if(cur -> right != nullptr){
        q.push(cur -> right);
    }
    }


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