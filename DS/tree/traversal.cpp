#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    Node* left;
    Node* right;
}Node;

Node* createNode(int data){
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->data = data;
    return newNode;
}

// void InsertNode(Node* node){
//     if(root == NULL){
//         root = node;
//     }
//     else{

//     }
// }

void preOrderTraversal(Node * temp){
    if(temp == NULL){
        return;
    }
    else{
        cout<<temp->data<<" ";
        preOrderTraversal(temp->left);
        preOrderTraversal(temp->right);
    }
}

void inorderTraversal(Node * temp){
    if(temp == NULL){
        return;
    }
    else{
        inorderTraversal(temp->left);
        cout<<temp->data<<" ";
        inorderTraversal(temp->right);
    }
}

void postOrderTraversal(Node * temp){
     if(temp == NULL){
        return;
    }
    else{
        inorderTraversal(temp->left);
        inorderTraversal(temp->right);
        cout<<temp->data<<" ";
    }

}

Node *root = NULL;
int main(){
    root = createNode(5);
    root->left = createNode(4);
    root->right = createNode(7);
    root->left->left = createNode(2);
    root->left->right = createNode(3);
    root->right->left = createNode(8);
    root->right->right = createNode(10);
    cout<<"PreOrder Traversal"<<endl;
    preOrderTraversal(root);
    cout<<endl;
    cout<<"InOrderTraversal"<<endl;
    inorderTraversal(root);
    cout<<endl;
    cout<<"PostOrderTraversal"<<endl;
    postOrderTraversal(root);
    cout<<endl;
    return 0;
}