#include<bits/stdc++.h>
using namespace std;

int main(){
    long int N,temp;
    cin>>N;
    long int *ar = new long int[N]; 
    for(long int i =0;i<N;i++){
        cin>>ar[i];
    }
    //sort Method 
    for(long int i =0;i<N;i++){
        for(long int j = 0;j<N-i-1;j++){
            if(ar[j] >ar[j+1]){
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    
    cout<<ar[N/2]<<endl;
    return 0;
}