#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int *ar1 = new int[m];
    int *ar2 = new int[n];
    for(int i=0;i<m;i++)
    cin>>ar1[i];
    for(int i=0;i<n;i++)
    cin>>ar2[i];
    map<int,int>mp;
    for(int i=0;i<m;i++){
        mp.insert(make_pair(ar1[i],0));
    }
       for(int i=0;i<n;i++){
        mp.insert(make_pair(ar2[i],0));
    }
    cout<<mp.size()<<endl;
     return 0;
}