#include<bits/stdc++.h>
using namespace std;

int main(){
int t,j,num;
cin>>t;
int *ar = new int[t];
for(int i =0;i<t;i++){
        cin>>ar[i];
    }
for(int i=1;i<t;i++){
num = ar[i];
j = i;
while(ar[j-1]>num && j>=1){
ar[j] = ar[j-1];
j--;
}
ar[j] = num;
}

for(int i =0;i<t;i++)
cout<<ar[i]<<" ";
delete []ar;
return 0;
}