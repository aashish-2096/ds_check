#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cin>>k;
    int max_ = 0,min_ = 0;
    for(int i=0;i<n;i++){
        if(ar[i]>k)
        max_++;
        else if(ar[i]<=k){
            if(max_!=0)
            min_++;
        }
    }
    cout<<min_<<endl;
return 0;
}