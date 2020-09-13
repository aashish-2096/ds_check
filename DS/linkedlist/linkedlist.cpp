#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void insert_node(struct Node** ref,int n){
struct Node* new_node =  (struct Node*)malloc(sizeof(struct Node));
new_node->data = n;
new_node->next = (*ref);
(*ref) = new_node;
}

void delete_node(struct Node** ref)
{
    struct Node* temp = NULL;
    temp = (*ref);
    (*ref)  = (*ref)->next;
    cout<<"Deleted Element\n"<<temp->data<<endl;
    free(temp);
}

void print_node(struct Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}
void insert_end(struct Node** ref,int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp =  (*ref);
    new_node->data = data;
    new_node->next = NULL;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_at(struct Node** ref, int data,int pos)
{
    struct Node* temp = (*ref);
    struct Node* prev = NULL;
    int n = 1;
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    if(pos == 1)
    {
        new_node->next =  (*ref);
        (*ref)  =  new_node;
    }
    else
    {
      while(pos != n)
      {
         n++;
         prev = temp;
         temp = temp->next; 
      }   
      new_node->next = temp;
      prev->next = new_node;
    }
}

int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 2;
    head->next = NULL;
    insert_node(&head,3);
    insert_node(&head,4);
    insert_node(&head,6);
    print_node(head);
    delete_node(&head);
    print_node(head);
    insert_at(&head,10,3);
    insert_end(&head,25);
    print_node(head);
    return 0;
}