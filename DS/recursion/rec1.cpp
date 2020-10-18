#include<bits/stdc++.h>
using namespace std;

void printPattern(int N, int X, bool status){
    if(status == true && N == X){
        cout<<N;
        return;
    }  
    else{
        cout<<N<<" ";
        if(N>0 && status == false)
         return printPattern(N-5,X,false);
        else
        return printPattern(N+5,X,true);
    }    
}

int main(){
    int t,N;
    cin>>t;
    while(t--){
        cin>>N;
        if(N>0)
        printPattern(N,N,false);
        else{
            cout<<N;
        }
        cout<<endl;
    }   
    return 0;
}