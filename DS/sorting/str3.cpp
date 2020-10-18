#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    long int N,X;
    long long int sum;
    cin>>t;
    while(t--)
    {    
        cin>>N;
        long int *ar =  new long int[N];
        sum =0;
        for(long int i =0;i<N;i++){
            cin>>ar[i];
        }
        sort(ar,ar+N);
         for(long int i =1;i<N+1;i++){
            sum += abs(ar[i-1] -i);
        }

        cout<<sum<<endl;
    }
    return 0;
}