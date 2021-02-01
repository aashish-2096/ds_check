#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,pos = 0,count = 0;
    cin>>n;
    int * ar = new int[n];
    for(int i=0;i<n;i++)
    cin>>ar[i];
    while(pos<n-1){
        pos += ar[pos];
        count++;
        cout<<pos<<endl;
    }
    cout<<count<<endl;
    return 0;
}