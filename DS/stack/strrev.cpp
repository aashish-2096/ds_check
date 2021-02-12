#include<bits/stdc++.h>
using namespace std;

char* reverse(char *S, int len)
{
    stack<char>ch;
    for(long long int i = 0;i<len;i++)
    ch.push(S[i]);
    char *str = (char*)malloc(sizeof(char)*len);
    long long int i = 0;
    while(i<len){
        str[i] = ch.top();
        ch.pop();
        i++;
    }
    return str;
}

int main(){
    char str[10000];
    cin>>str;
    int len = strlen(str);
    char *ch = reverse(str,len);
    cout<<ch<<endl;
    return 0;
}