#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class SinglyLinkedListNode{
    Node *head;
    public:
    SinglyLinkedListNode(){
        this->head = nullptr;
    }

    void insertBeginning(int value)
    {
        if(head == nullptr){
            Node *newNode = new Node(value);
            head = newNode; 
        }
        else{
            Node *newNode = new Node(value);
            newNode->next = head;
            head = newNode; 
        }
    }

    void swapFirstLast(){
        Node *temp, *prev,*temp2;
        temp = head;
        cout<<endl;
        while(temp->next != nullptr){
            prev = temp;
            temp = temp->next;
            cout <<prev->data<<" ";//temp->data;          
        }
        cout<<temp->data;
        cout<<endl;

        temp->next = head->next;
        prev->next = head;
        head->next =nullptr;
        head = temp;
    }

    void insertPosition(int value){
        Node *temp;
        temp = head;
        Node *newNode = new Node(value);
        cout<<"Hi1";
        while(temp !=nullptr){
            if(temp->data>value) {
                newNode->next = head;
                head = newNode;
                 cout<<"Hi2";
                 break;
            }        
            else if(temp->data <=value && temp->next->data> value){
                newNode->next = temp->next;
                temp->next = newNode;
                 cout<<"Hi3";
                 break;
            }
            else if(temp->data < value && temp->next ==nullptr){
                temp->next = newNode;
                 cout<<"Hi4";
                 break;
            }
            else{
                temp = temp->next;
                cout<<"Hi5";
            }
        }
    }

    void display(){
        Node*temp;
        temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

    }

};

int main(){
SinglyLinkedListNode *obj = new SinglyLinkedListNode();
int N,a;
cin>>N;
for(int i =0;i<N;i++){
    cin>>a;
    obj->insertBeginning(a);
}
obj->display();
// obj->insertPosition(3);
// obj->display();
obj->swapFirstLast();
obj->display();
return 0;
}