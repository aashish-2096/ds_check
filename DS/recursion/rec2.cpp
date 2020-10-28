#include<bits/stdc++.h>
using namespace std;
int getResult(string str){
    if(str.length() == 1)
    return 1;
    else if(str[0] == str[str.size()-1]){
        return 1*getResult(str.substr(1,str.size()-2));
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    string str;
    while(n--){
        cin>>str;
        if(getResult(str) == 1)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}