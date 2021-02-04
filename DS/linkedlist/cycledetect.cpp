#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void insert_end(struct Node** head,int val){
    struct Node* new_node =  (struct Node*)malloc(sizeof( struct Node));
    struct Node* temp = NULL;
    new_node->data = val;
    new_node->next = NULL;
    if(*head == NULL){
        *head = new_node;
    }
    else{
        temp = *head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void printNode(struct Node* head){
    struct Node* temp = NULL;
    temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

bool detectLoop(struct Node* head){
    struct Node* fp = NULL, *sp = NULL;
    fp =  head;
    sp = head;
    bool flag = false;
    if(head == NULL)
    return false;
    while(fp && sp && fp->next){
        sp = sp->next;
        fp = fp->next->next;
        if(sp == fp){
            flag = true;
            break;
        }
    }
    return flag;
}

int main(){
    struct Node* head= NULL;
    int n,v;
    cin>>n;
    for(int i=0;i<n;i++){
         cin>>v;
         insert_end(&head,v);
    }
    //head->next->next->next = head;
    if(detectLoop(head))
    cout<<"True"<<endl;
    else
    {
        cout<<"False"<<endl;
    }
    
    //printNode(head);
    return 0;
}