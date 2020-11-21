#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class LevelOrderTraversal{
    public:
    Node *root;
    LevelOrderTraversal(){
        this->root = nullptr;
    }
    Node* createNode(int data){
        Node *newNode = new Node(data);
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

    int returnHeightOfTree(Node*temp){
        int leftHeight,rightheight;
        if(temp ==nullptr){
            return -1;
        }
        else{
            leftHeight = 1+returnHeightOfTree(temp->left);
            rightheight = 1+returnHeightOfTree(temp->right);
            return max(leftHeight,rightheight);
        }
        return 0;
    }

    int returnSizeOfTree(Node*temp){
        if(temp == nullptr){
            return 0;
        }
        else{
            return 1+returnSizeOfTree(temp->left)+returnSizeOfTree(temp->right);
        }
    }    

    void levelOrderTraversal(Node *temp){
        queue<Node*>node;
        Node* diff = nullptr;
        if(temp == nullptr){
            return;
        }
        else{
            node.push(temp);
            while(!node.empty()){
                diff = node.front();
                node.pop();
                cout<<diff->data<<" ";
                if(diff->left != nullptr)
                    node.push(diff->left);
                if(diff->right != nullptr)
                node.push(diff->right);
            }
        }
    }
};

int main(){
LevelOrderTraversal * tree = new LevelOrderTraversal();
tree->root = tree->createNode(5);
tree->root->left = tree->createNode(4);
tree->root->left->left = tree->createNode(2);
tree->root->left->right = tree->createNode(3);
tree->root->right = tree->createNode(7);
tree->root->right->left = tree->createNode(6);
tree->root->right->right = tree->createNode(8);
tree->root->right->right->right = tree->createNode(11);
cout<<"Level Order Traversal"<<endl;
//tree->preOrderTraversal(tree->root);
//tree->levelOrderTraversal(tree->root);
cout<<tree->returnHeightOfTree(tree->root)<<endl;
cout<<tree->returnSizeOfTree(tree->root);
return 0;
}
