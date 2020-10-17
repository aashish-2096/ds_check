#include<bits/stdc++.h>
using namespace std;

long int findPos(int ar[],int low, int high){
    long int mid = low+(high-low)/2;
    if(low>high)
    return -1;
    if(ar[mid] == 1){
        if(mid > 0){
            if(ar[mid-1] == 0)
            return mid;
            else
            return findPos(ar,low,mid-1);            
        }
        else
            return mid;
    }
    else if(ar[mid] == 0)
    {
        if(mid < high){
            if(ar[mid+1] == 1)
            return mid+1;
            else
            return findPos(ar,mid+1,high);            
        }
        else
            return -1;
    }

}

int main(){
    int t;
    long int N;
    cin>>t;
    while(t--)
    {
        cin>>N;
        int *ar = new int [N];
        for(long int i =0;i<N;i++)
        cin>>ar[i];
        cout<<findPos(ar,0,N-1)<<endl;
        delete [] ar;
    }
    return 0; 
}