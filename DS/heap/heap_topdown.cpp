#include<bits/stdc++.h>
using namespace std;
int size;

int parent(int i){
    return (i-1)/2;
}
 int left_(int i){
    return (2*i)+1;
}

int right_(int i){
    return (2*i)+2;
}

void print_heap(int heap[], int n){
    cout<<endl;
    for(int i =0;i<n;i++)
    cout<<heap[i]<<" ";
    cout<<endl;
}

void heapify(int heap[],int n,int i)
{
    int s = i;
    int left = left_(i);
    int right = right_(i);
    if(left<n && heap[left] < heap[i])
        s = left;
    if(right<n && heap[right]< heap[s])
        s = right;
    if(s!=i){
        swap(heap[i],heap[s]);
        heapify(heap,n,s);
    }
}

int extractMin(int heap[]){
    int val = heap[0];
    size--;
    heapify(heap,size,0);
    return val;
}

void insert_heap(int heap[],int val,int i){
    heap[i] = val;
    while(i!=0 && heap[parent(i)] > heap[i]){
        swap(heap[i],heap[parent(i)]);
        i = parent(i);
    }
}

int main(){
    int t,n,ele;
    cin>>t;
    while(t--){
        cin>>n;
        int* heap = new int[n];
        for(int i = 0;i<n;i++){
            cin>>ele;
            insert_heap(heap,ele,i);
            size++;
        }
        cout<<extractMin(heap);
        print_heap(heap,size);
        cout<<endl;
    return 0;
}