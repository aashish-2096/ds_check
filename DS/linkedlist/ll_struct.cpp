#include<bits/stdc++.h>
using namespace std;

typedef struct node{
    int data;
    struct node * next;
}Node;
Node* head = NULL;

void insertEnd()
{
    Node *temp, *newNode;
    for(int i =0;i<5;i++){
        newNode = (Node*)malloc(sizeof(Node));
        newNode->data = i;
        newNode->next = NULL;
        if(head == NULL){
            head = newNode;
            temp = head;
        }
        else{
            temp->next = newNode;
            temp = newNode;
            }
        }
}

void insertPos(int pos, int data)
{
    Node *newNode, *temp;
    int count = 1;
    temp = head;
    newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    if(pos==1){
        newNode->next = head;
        head = newNode;
    }
    else{
        while(count+1 != pos){
        temp = temp->next;
        count++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    //newNode->next =       
}

void insertBeginnning(int data)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void deleteEnd()
{
    Node *temp,*prev;
    temp = head;
    prev = NULL;
    while(temp->next != NULL){
        prev = temp;
        temp = temp->next; 
    }
    prev->next = NULL;
    free(temp);
}

void deleteNode(int data)
{
    Node *temp, *prevNode;
    temp = head;
    prevNode = NULL;
    cout<<"Hi"<<endl;
    while(temp->data != data){
        prevNode = temp;
        temp = temp->next;
    }
    prevNode->next = temp->next;
    free(temp);
}

void display()
{
    Node *temp;
    if(head == NULL){
        cout<<"No data"<<endl;
    }
    else{
        temp = head;
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }
}

int main(){
    insertEnd();
    display();
    insertBeginnning(7);
    insertBeginnning(9);
    cout<<"Insert Begin"<<endl;
    display();
    deleteNode(1);
    cout<<"Delete"<<endl;
    display();
    deleteEnd();
    cout<<"Delete End"<<endl;
    display();
    insertPos(2,11);
    display();
    return 0;
}