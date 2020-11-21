#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    long int N,count;
    cin>>t;
    string str;
    while(t--){
    count = 0;
    stack<char>st;
    cin>>N;
    cin>>str;  
    if(str.length()>1){
        for(long int i =0;i<str.length();i++){
        if(str[i] == '<')
            st.push('<');
        else if(str[i] == '>'){
            if(!st.empty()){
                st.pop();
                count+=2;                
            }
        }
    }
    cout<<count<<endl;
  }
    else
     cout<<"0"<<endl; 
  }
return 0;
}