#include<bits/stdc++.h>
using namespace std;
#define LP(i,a,b) for(int i = a;i<b;i++)


int maxSum(int ar[],int n){
    long int maxSum = -1,sum;
    int temp;
    for(int i = 0;i<n;i++){
        //rotate    
        temp = ar[n-1];
        for(int i = n-1;i>0;i--){
            ar[i] = ar[i-1];
        }
        ar[0] = temp;
        sum = 0;
        // for(int i =0;i<n;i++)
        // cout<<ar[i]<<" ";
        // cout<<endl;
        //checkSum
        for(int i =0;i<n;i++){
            sum += i*ar[i];
        }
        if(sum>maxSum)
        maxSum = sum;
    }
     return maxSum;
}

  
int maxSumEfficient(int ar[], int n){
    long int maxSum = -1, arrSum = 0,Rtemp = 0,Rnew;
    for(int i = 0;i<n;i++){
        arrSum+= ar[i];
        Rtemp +=  i*ar[i];
    }
    maxSum = Rtemp;
    int j = 1;
    while(j<=n){
        Rnew = Rtemp  + arrSum - n*ar[n-j];
        j++;
        Rtemp = Rnew;
        if(Rnew>maxSum)
        maxSum = Rnew;
    }
    return maxSum;

}
int main(){
    int n;
    cin>>n;
    int *ar = new int[n];
    LP(i,0,n){
        cin>>ar[i];
    }
    cout<<maxSumEfficient(ar,n)<<endl;
    return 0;

}