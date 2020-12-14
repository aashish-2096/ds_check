#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
    return (ceil(log2(n)) == floor(log2(n))) ? true:false;
    //return n &&(!(n&(n-1)));
}

void createSegmentTree(long long int ST[],int ar[],int low, int high,int pos){
    if(low == high){
        ST[pos] = ar[low];
        return;
    }
    else{
        int mid = (low+high)/2;
        createSegmentTree(ST,ar,low,mid,2*pos+1);
        createSegmentTree(ST,ar,mid+1,high,2*pos+2);
        ST[pos] = max(ST[2*pos+1],ST[2*pos+2]);
        return;
    }
}

int findMaxRange(long long int ST[],int low,int high, int qlow,int qhigh,int pos){
    if(qlow<=low && qhigh>=high)
    return ST[pos];
    if(qlow>high || qhigh<low)
    return INT_MIN;
    int mid = (low+high)/2;
    int max1 = findMaxRange(ST,low,mid,qlow,qhigh,2*pos+1);
    int max2 = findMaxRange(ST,mid+1,high,qlow,qhigh,2*pos+2);
    return max(max1, max2);
}

void updateSegmentTree(long long int ST[],int low,int high,int index,int val,int pos){
    if(index<low || index>high)
    return;
    if(low == high){
        ST[pos] = val;
        return;
    }
    int mid = (low+high)/2;
    updateSegmentTree(ST,low,mid,index,val,2*pos+1);
    updateSegmentTree(ST,mid+1,high,index,val,2*pos+2);
    ST[pos] = max(ST[2*pos+1],ST[2*pos+2]);
    return;
}
int main()
{
    int N,t,a,b,T;
    long long int N1;
    cin>>T;
    while(T--){
    cin>>N;
    int*ar =  new int[N];
    for(int i =0 ;i<N;i++){
        cin>>ar[i];
    }
    if(powerOfTwo(N)){
        N1= 2*N -1;
    }
    else{
        N1 = 2*pow(2,ceil(log2(N))) - 1;
    }
    long long int *ST = new long long int[N1];
    createSegmentTree(ST,ar,0,N-1,0);
    for(int i = 0 ;i<N1;i++){
        cout<<ST[i]<<" ";
    }
    cout<<endl;
    
    // while(t--){
    //     cin>>a>>b;
    //     cout<<findMaxRange(ST,0,N-1,a-1,b-1,0);
    // }
    //ar[1] = 7;
    updateSegmentTree(ST,0,N-1,1,7,0);
    for(int i = 0;i<N1;i++){
        cout<<ST[i]<<" ";
    }
    }
    
    //cout<<endl;
    return 0;
}