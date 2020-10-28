#include<bits/stdc++.h>
using namespace std;

int getPosition(int ar[],int low,int high){
int i = low-1,temp;
int pivot = ar[high];
for(int k =low;k<high;k++){
if(ar[k]<=pivot){
    i++;
    temp = ar[i];
    ar[i] = ar[k];
    ar[k] = temp;
    }
}
temp = ar[i+1];
ar[i+1] = ar[high];
ar[high] = temp;
return i+1;
}

void quickSort(int ar[],int low,int high){
    if(low>=high)
    return;
    int pivot  = getPosition(ar,low,high);
    quickSort(ar,low,pivot-1);
    quickSort(ar,pivot+1,high);
}

int main(){
    int N;
    cin>>N;
    int * ar =  new int[N];
    for(int i =0;i<N;i++){
        cin>>ar[i];
    }
    quickSort(ar,0,N-1);
      for(int i =0;i<N;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}