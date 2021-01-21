#include<bits/stdc++.h>
using namespace std;

#define LP(i,a,b) for(int i = a;i<b;i++)

// ios_base::sync_with_stdio(false);
// cin.tie(NULL);

bool checkSum(int ar[],int n,int total){
    //cout<<"Into Check Sum"<<endl;
    int rot = -1;
    LP(i,0,n-1){
        if(ar[i]>ar[i+1])
        rot = i+1;
    }
    reverse(ar,ar+rot);
    reverse(ar+rot,ar+n);
    reverse(ar,ar+n);
    bool flag = false;
    for(int i = n-1;i>=n/2;i--){
        int ele = (total - ar[i]);
        //cout<<ele;
        auto itr =  find(ar,ar+n,ele);
        if(itr == ar+n){
            flag = false; 
        }
        else{
            flag = true;
            break;
        }
    }
    return flag;
}

bool checkSumV2(int ar[],int n,int total){
  int low,high;
    int i;
     for(i =0;i<n-1;i++){
        if(ar[i]>ar[i+1])
        break;
    }
    low  =  (i+1)%n;
    high =  i%n;
    while(low != high){
        if(ar[low]+ar[high] == total)
        return true;
        else if(ar[low]+ar[high]>total){
            high = (n+high-1)%n;
        }
        else if(ar[low]+ar[high]<total){
            low =  (low+1)%n;
        }
    }
    return false;
}
int main()
{
    int n,val;
    cin>>n;
    int *ar = new int[n];
    LP(i,0,n){
        cin>>ar[i];
    }
  
   
    //  LP(i,0,n){
    //     cout<<ar[i]<<" ";
    // }
    cin>>val;
    //bool status = checkSum(ar,n,val);
    bool status = checkSumV2(ar,n,val);
    if(status){
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    
    return 0;

}