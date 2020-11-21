#include<bits/stdc++.h>
using namespace std;

class Node{
    
    public:
        int data;
        Node*left;
        Node*right;
        Node(int val){
            this->data = val;
            this->left = nullptr;
            this->right = nullptr;
        }
};

class BinaryTree{
    public:
        Node*root;
        BinaryTree(){
            this->root = nullptr;
        }

        Node* createNode(int val){
            Node* newNode = new Node(val);
            return newNode;
        }

        void insertBinarytree(int val,Node*root){
            Node* newNode = new Node(val);
            if(root == nullptr){
                root = newNode;
            }
            else{
                if(val>root->data){
                    if(root->right != nullptr)
                        insertBinarytree(val,root->right);
                    else
                        root->right = newNode;
                }
                else if(val<root->data){
                    if(root->left != nullptr)
                    insertBinarytree(val,root->left);
                    else
                        root->left = newNode;
                }
            }
        }

        Node* insertBinary(int val,Node* root){
            if(root == NULL){
                root = createNode(val);
                return root;
            }
            else{
                if(val>root->data){
                    root->right = insertBinary(val,root->right);
                }
                else{
                    root->left = insertBinary(val,root->left);
                }
                return root;
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

        void insertNode(int val){
            root = insertBinary(val,root);
        }

        int findBinaryNode(Node* temp,int val){
            if(temp == nullptr){
                return -1;
            }
            else{
                if(temp->data == val)
                return 1;
                else if(val>temp->data){
                    return findBinaryNode(temp->right,val);
                }
                else if(val<temp->data){
                    return findBinaryNode(temp->left,val);
                }
            }
        }
        int findMaxElement(Node* temp){
            if(temp->right == nullptr)
            return temp->data;
            else{
                return findMaxElement(temp->right);
            }
        } 

        int findMinElement(Node* temp){
            if(temp->left == nullptr){
                return temp->data;
            }
            else{
                return findMinElement(temp->left);
            }
        }

        Node* deleteBinaryNode(Node*temp, int val){
            if(temp == nullptr)
            return temp;
            else{
                if(temp->data>val){
                    temp->left = deleteBinaryNode(temp->left,val);
                }
                else if(temp->data<val){
                    temp->right = deleteBinaryNode(temp->right,val);
                }
                else{
                    if(temp->left == NULL)
                    return temp->right;
                    else if(temp->right == NULL)
                    return temp->left;
                    temp->data = findMinElement(temp->right);
                    temp->right = deleteBinaryNode(temp->right,temp->data);
                }
                return temp;
            }
        }

};

int main(){
    BinaryTree *binary = new BinaryTree();
    int N;
    cin>>N;
    // binary->root = new Node(5);
    // binary->insertBinarytree(4,binary->root);
    // binary->insertBinarytree(2,binary->root);
    // binary->insertBinarytree(1,binary->root);
    // binary->insertBinarytree(6,binary->root);
    // // binary->insertBinarytree(7,binary->root);
    // binary->root = binary->insertBinary(5,binary->root);
    // binary->root = binary->insertBinary(4,binary->root);
    // // binary->insertBinary(2,binary->root);
    // // binary->insertBinary(1,binary->root);
    // binary->insertBinary(6,binary->root);
    // binary->insertBinary(7,binary->root);
    for(int i =0;i<N;i++){
        int a;
        cin>>a;
        binary->insertNode(a);
    }
    binary->inOrderTraversal(binary->root);
    cout<<endl;
    // cin>>N;
    // int result = binary->findBinaryNode(binary->root,N);
    // if(result==-1)
    // cout<<"Not Found"<<endl;
    // else if(result ==1)
    // cout<<"Found"<<endl;

    // cout<<binary->findMaxElement(binary->root)<<endl;
    // cout<<binary->findMinElement(binary->root)<<endl;
    cin>>N;
    binary->root = binary->deleteBinaryNode(binary->root,N);
    binary->inOrderTraversal(binary->root);
    return 0;
} 