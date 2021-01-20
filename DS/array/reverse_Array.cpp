#include<bits/stdc++.h>
using namespace std;

// Cyclic Rotation By 1
int main(){
    int n,rot;
    cin>>n;
    int *ar = new int[n];
    for(int i =0;i<n;i++)
    cin>>ar[i];
    rot = ar[n-1];
    for(int i = n-1;i>0;i--){
        ar[i] = ar[i-1];
    }
    ar[0] = rot;
    //stl reverse
    // reverse(ar,ar+rot);
    // reverse(ar+rot,ar+n);
    // reverse(ar,ar+n);
    
    for(int i =0;i<n;i++)
    cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}  