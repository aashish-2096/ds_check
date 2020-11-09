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

class linkedList{
public:
Node *head;
linkedList(){
    this->head = nullptr;
}
void insertBegining(int data){
    Node *newNode = new Node(data);
    if(newNode == nullptr){
        newNode->data = data;
        newNode->next = nullptr;
        head = newNode;
    }
    else{
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
}
};

void display(Node*head){
    Node *temp;
    temp = head;
    while(temp !=nullptr){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){
    linkedList *ll = new linkedList();
    for(int i = 0;i<5;i++){
        ll->insertBegining(i*5);
    }
    display(ll->head);
    return 0;
}