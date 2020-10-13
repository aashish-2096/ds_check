#include<bits/stdc++.h>
using namespace std;

long int countCheck(long long int ar[],long int N)
{
    long long int max =  ar[0];
    long long count = 1;
    for(long int i =1;i<N;i++)
    {
        if(ar[i]>= max)
        {
            count++;
            max = ar[i];
        }
    }
return count;
}

int main(){
    int t;
    long int N;
    cin>>t;
    while(t--)
    {
        cin>>N; 
        long long int *ar = new long long int[N];
        for(long int i =0;i<N;i++)
        cin>>ar[i];
        cout<<countCheck(ar,N)<<endl;
        delete [] ar;
    }
    return 0; 
}