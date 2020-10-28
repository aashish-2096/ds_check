
// iterative Solution

// #include<bits/stdc++.h>
//e using namespace std;
// long int getResult(long int two, long int one, int size){
//     if(size == 0)
//         return one;
//     else
//         return getResult(one, two+one,size-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     int num;
//     while(n--){
//         cin>>num;
//         cout<<getResult(1,1,num-2);
//         cout<<endl;
//     }
//     return 0;
// }

//Recursive Solution
#include<bits/stdc++.h>
using namespace std;
long int getResult(long int n){
    if(n == 0 || n == 1)
    return 1;
    else{
        return getResult(n-1)+ getResult(n-2);
    }
    
}
int main(){
    int n;
    cin>>n;
    int num;
    while(n--){
        cin>>num;
        cout<<getResult(num-1);
        cout<<endl;
    }
    return 0;
}