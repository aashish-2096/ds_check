#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};

void insert_beg(struct Node** ref, int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->prev = NULL;
    new_node->data = data;
    new_node->next = *ref;
    *ref= new_node;
}

void print_node(struct Node* ref)
{
    while(ref != NULL)
    {
        cout<<ref->data<<endl;
        ref = ref->next;
    }
}

void delete_node(struct Node** ref)
{
    struct Node* temp = NULL;
    temp = (*ref);
    (*ref)  = (*ref)->next;
    (*ref)->prev = NULL;
    cout<<"Deleted Element\n"<<temp->data<<endl;
    free(temp);
}

void insert_end(struct Node** ref,int data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp =  (*ref);
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = NULL;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
}

main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 2;
    head->next  = NULL;
    head->prev = NULL;
    insert_beg(&head,10);
    print_node(head);
    insert_end(&head,24);
    print_node(head);
    delete_node(&head);
    print_node(head);
    return 0;
}