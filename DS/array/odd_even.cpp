#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<int>vt;
    sort(ar,ar+n);
    for(int i=0;i<=n/2;i++){
        vt.push_back(ar[i]);
        vt.push_back(ar[n-1-i]);
    }
      for(int i=0;i<n;i++){
        cout<<vt[i]<<" ";
    }
    return 0;
}
