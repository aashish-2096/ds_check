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
    cout<<"Into Heapify"<<endl;
    //cout<<n<<" "<<i<<endl;
    int s = i;
    int left = left_(i);
    int right = right_(i);
    if(left<n && heap[left] < heap[i])
        s = left;
    if(right<n && heap[right]< heap[s])
        s = right;
    if(s!=i){
        //cout<<i<<" "<<s<<endl;
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

void decreaseKey(int heap[],int val,int index ){
    heap[index] = val;
    while(index!= 0 && heap[parent(index)] < heap[index]){
        swap(heap[parent(index)],heap[index]);
        index = parent(index);
    }
}

void build_heap(int heap[], int n){
    cout<<"Into Build Heap"<<endl;
    for(int i=((n/2)-1);i>=0;i--){
        heapify(heap,n,i);
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
        int *heap = new int[n];
        for(int i =0;i<n;i++){
            size++;
            cin>>heap[i];
        }
      
        build_heap(heap,n);
        print_heap(heap,n);
        cout<<extractMin(heap)<<endl;
    }
    return 0;
}