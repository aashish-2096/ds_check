#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,N,M;
    cin>>t;
    long int sum_min, sum_max;
    while(t--){
        cin>>N>>M;
        sum_max =0;
        sum_min =0;
        int *ar = new int[N];
        for(int i =0;i<N;i++){
            cin>>ar[i];
        }
        sort(ar,ar+N);
        for(int i =0;i<N-M;i++){
            sum_min+=ar[i];
        }
        int j =N-1;
        int count =0;
        while(count!=N-M){
                sum_max+=ar[j];
                j--;
                count++;
            }
            cout<<sum_max-sum_min<<endl;
        delete [] ar;
    }
    return 0;

}