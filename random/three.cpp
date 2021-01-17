#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>ar(26);
    int t,index;
    string str;
    char ch;
    bool flag;
    cin>>t;
    while(t--){
        flag = false;
        fill(ar.begin(),ar.end(),0);
        cin>>str;
        for(int i = 0;i<str.size();i++){
            index = str[i] - 'a';
            if(ar[index] == 0){
                ar[index]++;
            }
            else if(ar[index]>0){
                ch = str[i];
                flag = true;
                break;
            }
        }
        if(flag)
        cout<<ch<<endl;
        else
        {
            cout<<-1<<endl;
        }
    }
    
    
    return 0;
}