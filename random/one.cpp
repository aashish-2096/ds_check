#include<bits/stdc++.h>
using namespace std;
// next iteration 
//checking the second string to be longer one 
int main(){
    string s1;
    string s2;
    int a,b,carry,sum;
    string result = "";
    cin>>s1>>s2;
    int max =  std::max(s1.length(),s2.length());
    int min = std::min(s1.length(),s2.length());
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end()); 
    carry = 0;
    sum = 0;
    for (int i = 0;i<max;i++){
    a = s1[i] -'0';
    if(i>= min){
        b = 0;
    }
    else{
        b = s2[i] -'0';
    }
    sum = a+b+carry;
    result+= std::to_string(sum%10);
    carry = sum/10;
    }
    if(carry != 0){
        result+= std::to_string(carry);
    }
    cout<<string(result.rbegin(),result.rend())<<endl;
    return 0;
}