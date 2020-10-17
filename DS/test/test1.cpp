#include<bits/stdc++.h> 
using namespace std;

int main () 
{ 
    int t;
    long int N,a,x;
    cin>>t;
    while(t--){
        cin>>N;
        std::vector<long int> vec; 
        vector<long int> ::iterator it;

        for(long int i =0;i<N;i++){
            cin>>a;
            vec.push_back(a);
        }
        cin>>x;
        it = find(vec.begin(),vec.end(),x);
        if(it != vec.end()){
            cout<< it- vec.begin()<<endl;
        } 
        else{
            cout<<-1<<endl;
        }
    } 
    return 0; 
}