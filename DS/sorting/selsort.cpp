#include<bits/stdc++.h>
using namespace std;

int main(){
int t,temp,min;
cin>>t;
int flag;
int *ar = new int[t];
for(int i =0;i<t;i++){
        cin>>ar[i];
    }
for(int i=0;i<t;i++){
min =  i;
for(int j = i;j<t;j++){
   if(ar[j]<ar[min]){
       min = j;
    }   
  }
  temp = ar[i];
  ar[i] = ar[min];
  ar[min] = temp;
}

for(int i =0;i<t;i++)
cout<<ar[i]<<" ";
return 0;
}