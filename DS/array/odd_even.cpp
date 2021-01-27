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
    // for(int i=2;i<=n;i+=2)
    // {
    //     if(ar[i]<ar[i-1]){
    //         swap(ar[i],ar[i-1]);
    //     }
    // }
    for(int i=0;i<n/2;i++){
        vt.push_back(ar[i]);
        vt.push_back(ar[n-1-i]);
    }
      for(int i=0;i<n;i++){
        cout<<vt[i]<<" ";
    }
    return 0;
}

// 18 18 9 3 16 18 11 1 13 5 6 7 16 7 16 17
// 1 18 3 18 5 18 6 17 7 16 7 16 9 16 11 13