#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this->data = val;
        this->left = nullptr;
        this->right = nullptr;         
    }
};

class treeImpl{
    public:
        Node * root;
        treeImpl(){
            this->root = nullptr;
        }
        Node *createNode(int val){
            Node *newNode = new Node(val);
            return newNode;
        }

        void preOrderTraversal(Node* temp){
            if(temp == nullptr){
                return;
            }
            else{
                cout<<temp->data<<" ";
                preOrderTraversal(temp->left);
                preOrderTraversal(temp->right);
            }
        }

        void postOrderTraversal(Node* temp){
            if(temp == nullptr){
                return;
            }
            else{
                postOrderTraversal(temp->left);
                postOrderTraversal(temp->right);
                cout<<temp->data<<" ";
            }
        }

        void inOrderTraversal(Node* temp){
            if(temp == nullptr){
                return;
            }
            else{
                inOrderTraversal(temp->left);
                cout<<temp->data<<" ";
                inOrderTraversal(temp->right);
            }
        }

        vector<int>traversalReturn(Node* temp)
        {
            static vector<int>vt;
            

        }
};

int main(){
    treeImpl *tree = new treeImpl();
    tree->root = tree->createNode(5);
    tree->root->left = tree->createNode(4);
    tree->root->left->left = tree->createNode(2);
    tree->root->left->right = tree->createNode(3);
    tree->root->right = tree->createNode(7);
    tree->root->right->left = tree->createNode(6);
    tree->root->right->right = tree->createNode(8);
    cout<<"PreOrderTraversal"<<endl;
    tree->preOrderTraversal(tree->root);
    cout<<endl<<"InOrderTraversal"<<endl;
    tree->inOrderTraversal(tree->root);
    cout<<endl<<"PostOrderTraversal"<<endl;
    tree->postOrderTraversal(tree->root);
    return 0;
}