#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void insertNode(struct Node **ref,int data)
{
    // cout<<"input"<<data<<endl;
    struct Node* temp = *ref;
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = *ref;
    if(temp == NULL){
        new_node->next = new_node;
        (*ref) = new_node;
    }
    else{
        while(temp->next != *ref){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    *ref = new_node;
}

void printNode(struct Node* head){
    struct Node *temp = head;
    while(temp->next != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
    
}
int main(){
    int t, n;
    cin>>t;
    struct Node *head=  NULL;
    for(int i=0;i<t;i++){
        cin>>n;
        insertNode(&head,n);
    }
    printNode(head);

    return 0;
}