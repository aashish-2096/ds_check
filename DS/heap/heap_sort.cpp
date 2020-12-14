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

void heapify(int heap[],int n,int i)
{
    int left = left_(i);
    int right = right_(i);
    int s = i;
    if(left <n && heap[left]<heap[i]){
        s = left;
    }
    if(right<n && heap[right]<heap[s])
    s = right;

    if(s!= i){
        swap(heap[i],heap[s]);
        heapify(heap,n,s);
    }
}

void build_heap(int heap[],int n){
    for(int i = n/2-1;i>=0;i--){
        heapify(heap,n,i);
    }
}


void heapSort(int heap[],int n){
    build_heap(heap,n);
    for(int i = n-1;i>0;i--){
        swap(heap[i],heap[0]);
        heapify(heap,i,0);
    }
}


void print_heap(int heap[], int n){
    cout<<"Into Print";
    cout<<endl;
    for(int i =0;i<n;i++)
    cout<<heap[i]<<" ";
    cout<<endl;
}

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int* heap = new int[n];
        for(int i = 0;i<n;i++){
            cin>>heap[i];
            size++;
        }
        
        heapSort(heap,n);
        print_heap(heap,n);
    }
    return 0;
}