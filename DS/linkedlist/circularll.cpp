#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void insertNode(struct Node **ref, int data){
struct Node* new_node = (struct Node*)malloc(sizeof(struct Node*));
new_node->data =  data;
new_node->next = NULL;
struct Node* temp = *ref;
if(temp == NULL){
    *ref = new_node;
    new_node->next = *ref;
}
else{
    while(temp->next != *ref){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = *ref;
}
}

void splitList(Node *head, Node **head_1, Node **head_2)
{
   struct Node *temp = head, *prev = NULL;
   if(head != NULL){
       int size = 1;
   while(temp->next != head){
       size++;
       temp = temp->next;
   }
   temp = head;
   if(size%2 == 0){
        *head_1 = head;
   for(int i = 0;i<size/2;i++){
       prev = temp;
       temp = temp->next;
   }
    prev->next = *head_1;
    *head_2 = temp;
    for(int i = size/2;i<size;i++){
       prev = temp;
       temp = temp->next;
   }
    prev->next = *head_2;
   }
   else{
       *head_1 = head;
   for(int i = 0;i<=size/2;i++){
       prev = temp;
       temp = temp->next;
   }
    prev->next = *head_1;
    *head_2 = temp;
    for(int i = (size/2)+1;i<size;i++){
       prev = temp;
       temp = temp->next;
   }
    prev->next = *head_2;
   }
   }
   
}

void printNode(struct Node* head){
    struct Node* temp = head;
    if(temp == NULL)
    return;
    else{
        if(temp->next == head){
            cout<<temp->data<<endl;
        }
        else{
             while(temp->next != head){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<temp->data<<endl;
        }
    }
}
int main()
{
    struct Node* head =  NULL;
    struct Node* head_1 =  NULL;
    struct Node* head_2 =  NULL;
    int n,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        insertNode(&head,a);
    }
    printNode(head);
    splitList(head,&head_1,&head_2);
    printNode(head_1);
    printNode(head_2);
    return 0;
}