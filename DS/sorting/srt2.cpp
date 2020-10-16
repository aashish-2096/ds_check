#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long int N;
    while(t--){
    cin>>N;
    long int *ar = new long int[N]; 
    for(long int i =0;i<N;i++){
        cin>>ar[i];
    }
    std::sort(ar,ar+N);
    cout<<ar[N/2]<<endl;
}
    return 0;
}