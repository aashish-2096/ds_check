#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){

    int t;
    long int N,l_index,r_index;
    cin>>t;
    while(t--)
    {    
        cin>>N;
        l_index = 0;
        r_index = N-1;
        long int *ar = new long int [N]; 
        long int *ar2 = new long int [N];
        for(long int i =0;i<N;i++){
            cin>>ar[i];
            ar2[i] = ar[i];
        }
        sort(ar,ar+N);
        for(long int i =0;i<N;i++){
            if(ar[i] != ar2[i]){
                l_index = i;
                break;
            }
        }
          for(long int i =N-1;i>=0;i--){
            if(ar[i] != ar2[i]){
                r_index = i;
                break;
            }
          }
        cout<<l_index<<" "<<r_index<<endl;
        delete [] ar;
        delete [] ar2;
    }
    return 0;
}