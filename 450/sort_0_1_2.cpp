#include<bits/stdc++.h>
using namespace std;
typedef long int ll; 

int main(){
    int t;
    ll N,zero,one,two;
    cin>>t;
    while(t--){
        cin>>N;
        ll *ar = new ll[N];
        zero = 0;
        one =0;
        two =0;
        for(ll i = 0;i<N;i++){
            cin>>ar[i];
            if(ar[i] == 0){
                zero++;
            }
            else if(ar[i] == 1){
                one++;
            }
            else if(ar[i] == 2){
                two++;
            }
        }
       while(zero !=0){
           cout<<'0'<<" ";
           zero--;
       }
          while(one !=0){
           cout<<'1'<<" ";
           one--;
       }
          while(two !=0){
           cout<<'2'<<" ";
           two--;
       }
       cout<<endl;
    }
    return 0;
}