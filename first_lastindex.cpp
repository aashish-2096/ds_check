#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t,N,M,a,first,last;
    cin>>t;
    while(t--) {
        first = -1,last = -1;
        cin>>N>>M;
       vector<int>vt;
        for(int i=0;i<N;i++){
            cin>>a;
            vt.push_back(a);
        }
        vector<int>::iterator it;
        it = find(vt.begin(),vt.end(),M);
        if(it != vt.end()){
            //cout<<"Found at index"<<it-vt.begin()<<endl;
            first = it - vt.begin();
            for(int i = first;i<N;i++){
                if(vt[i] == M){
                    last = i;
                }
                else
                    break;
            }
            cout<<first<<" "<<last<<endl;
        }
    }
    return 0;
}