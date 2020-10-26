#include<bits/stdc++.h>
using namespace std;

void mergeArray( long int ar[], long int left, long int mid, long int right){
     long int n1,n2;
    n1 = (mid-left)+1;
    n2 =  right-mid;
    long int *leftArray = new long int[n1];
    long int *rightArray = new long int[n2];
    for(long int i = 0;i<n1;i++){
        leftArray[i] = ar[left+i];
    }
    for(long int i =0;i<n2;i++){
        rightArray[i] = ar[mid+i+1];
    }
    long int i = left,j = 0,k = 0;
    while(j<n1 && k<n2){
        if(leftArray[j]<=rightArray[k]){
            ar[i++] = leftArray[j];
            j++;
        }
        else{
            ar[i++] = rightArray[k];
            k++;
        }
    }
    while(j<n1){
        ar[i++] = leftArray[j];
        j++;
    }
    while(k<n2){
        ar[i++] = rightArray[k];
        k++;
    }
    delete [] leftArray;
    delete [] rightArray;
}

void mergeSort(long int ar[],long int left,long int right){
if(left>=right)
return;
long int mid = left + (right-left)/2;
mergeSort(ar,left,mid);
mergeSort(ar,mid+1,right);
mergeArray(ar,left,mid,right);
}

int main(){
    int k;
    long int t;
    cin>>k;
    while(k--){
        cin>>t;
        long int *ar = new long int[t];  
        for(long int i=0;i<t;i++){
        cin>>ar[i];}
        mergeSort(ar,0,t-1);
        for(long int i =0;i<t;i++)
        cout<<ar[i]<<" ";
    }
return 0;
}