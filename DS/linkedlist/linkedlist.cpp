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

void print_node(struct Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<endl;
        head = head->next;
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
    return 0;
}