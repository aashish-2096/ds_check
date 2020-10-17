#include<bits/stdc++.h>
using namespace std;

long int checkNumber(long int ar[],long int N, long int K){
    bool l_check = true;
    bool r_check = true;
    long int counter = 0;
    for(long int i = 0;i< N;i++){
        cout<<ar[i]<<" "<<l_check <<" "<<r_check<<endl; 
        if(ar[i] != -1 && (l_check || r_check)){
            if(ar[i]<=K && l_check){
                counter++;
                ar[i] = -1;
            }
            else if(ar[N-i-1]<= K && r_check){
                counter++;
                ar[i] = -1;
            }
            if(ar[i]>K && l_check){
                l_check = false;
                ar[i] = -1;
            } 
            else if(ar[N-i-1]>K && r_check)
            {
                r_check = false;
                ar[N-i-1] = -1;
            }
        }
        else{
            return counter;
        }
    }
    return counter;
}

int main(){
    long int N,K;
    cin>>N>>K;
    long int * ar =  new long int[N];
    for(long int i =0;i<N;i++){
        cin>>ar[i];
    }
    cout<<checkNumber(ar,N,K)<<endl;
    return 0;
}