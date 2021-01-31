#include<bits/stdc++.h>
using  namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int*ar= new int[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        vector<int>vt;
        sort(ar,ar+n,greater<int>());
        for(int i=0,j=n-1;i<=j;i++,j--){
            if(i!=j)
            {
                vt.push_back(ar[i]);
                vt.push_back(ar[j]);
            }
            else
            {
                vt.push_back(ar[i]);
            }
            
        }
        vector<int>::iterator it;
        for(it=vt.begin();it<vt.end();it++)
        cout<<*it<<" ";
    }
   
    return 0;
}