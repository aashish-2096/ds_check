#include<bits/stdc++.h>
using namespace std;


void preProcess(int *ar, int*blk,int n){
    cout<<"Into Preprocess"<<endl;
    int sum = 0,ind = 0;
    int len =  sqrt(n);
    for(int i=0;i<n;i++){
        if((i/len) == ind){
            sum += ar[i];
        }
        if(ind != ((i)/len)){
            blk[ind]= sum;
            ind++;
            sum = ar[i];
        }
        if(i==n-1){
            blk[ind]= sum;
        } 
    }
}

int querySum(int l, int r, int *ar, int *blk,int size){
    int sum =0;
    int len = sqrt(size);
    while(l<r and l%len != 0 and l!=0){
        sum+=ar[l];
        l++;
    } 
    while(l+len<=r){
        sum+= blk[l/len];
        l+=len;
    }
    while(l<=r)
    {
        sum+=ar[l];
        l++;
    }
    return sum;
}

int main(){
    int n,l,r;
    cin>>n;
    int *ar = new int[n];
    int len = sqrt(n);
    for(int i=0;i<n;i++)
    cin>>ar[i];
    int *blk = new int [len];
    preProcess(ar,blk,n);
    for(int i=0;i<len;i++)
    cout<<blk[i]<<" ";
    cin>>l>>r;
    cout<<querySum(l,r,ar,blk,n);
    cout<<endl;
    return 0;
}