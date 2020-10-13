#include<bits/stdc++.h>
using namespace std;

long int findNumber(long int ar[], long int N,long int k){
    std::sort(ar,ar+N);
    long int min = ar[0];
    long int count  = 0;
    for(long int i =0;i<N;i++)
    {
        if(ar[i] == min){
            count++;
            if(count == k)
            break;

        }
        else{
            min =  ar[i];
            count = 1;
        }
    }
    return min;
}

int main(){
    long int N,K;
        cin>>N;
        long int *ar = new long int [N];
        for(long int i =0;i<N;i++)
        cin>>ar[i];
        cin>>K;
        cout<<findNumber(ar,N,K)<<endl;
        delete [] ar;
    return 0; 
}