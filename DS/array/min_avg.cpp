#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,k;
    long double min_avg;
    cin>>t;
    vector<int>vt;
    for(int i = 0;i<t;i++){
        cin>>a;
        vt.push_back(a);
    }
    cin>>k;
    min_avg = 0;
    for(int i =0;i<k;i++){
        min_avg+=(vt[i]);
    }
    double ans = min_avg;
    int index = 0,n;
    n = vt.size();
    cout<<ans<<endl;
    for(int i=0,j=k;j<n;i++,j++){
        min_avg  += (vt[j]-vt[i]);
        cout<<min_avg<<endl;
        if(min_avg<=ans){
            ans = min_avg;
            index = i+1;
        }
    }
    cout<<index+1<<endl;
    return 0;
}