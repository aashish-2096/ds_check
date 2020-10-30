#include <iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        //first method
        // for(int i = str.length()-1;i>=0;i--){
        //     cout<<str[i];
        // }

        //second method
        string str2  = string(str.rbegin(),str.rend());
        cout<<str2<<endl;

        //third method    
        //reverse(str.begin(),str.end());
        //cout<<str<<endl;
    }
	return 0;
}