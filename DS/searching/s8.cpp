#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long int N,counter,prev;
    cin>>t;
    while(t--){
        cin>>N;
        counter = 0;
        long int* ar = new long int[N];
        for(long int i = 0;i<N;i++){
            cin>>ar[i];
        }
        std::sort(ar,ar+N);
        prev = ar[0];
        for(long int i = 0;i<N;i++)
        {
            if(ar[i] == prev){
                counter++;
                if(counter>N/2)
                break;
            }
            else if(ar[i] != prev){
                prev = ar[i];
                counter = 1;
            }
           
        }
        if(counter<=N/2)
        cout<<-1<<endl;
        else
        cout<<prev<<endl;
    }    
    return 0;
}