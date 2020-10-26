#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,temp;
    cin>>t;
    int flag;
    int *ar = new int[t];
    for(int i =0;i<t;i++){
        cin>>ar[i];
    }

for(int i=0;i<t;i++){
    flag =0;
    for(int j=0;j<t-i-1;j++){
        if(ar[j]>ar[j+1]){
            temp =  ar[j];
            ar[j] = ar[j+1];
            ar[j+1] = temp;
            flag =1;
            }
        }
        if(flag == 0){
            break;
        }
}
   
for(int i =0;i<t;i++)
cout<<ar[i]<<" ";
return 0;
}