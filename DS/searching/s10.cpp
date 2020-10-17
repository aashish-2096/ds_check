#include<bits/stdc++.h> 
using namespace std;

int main () 
{ 
    long long int X,Y,x_pos,y_pos;
    cin>>X>>Y;
    x_pos = -1;
    y_pos =-1;
    long long int *ar=  new long long int[X];
    for(int i =0;i<X;i++){
        cin>>ar[i];
    }
    for(long long int i =0,j = X-1;i<X,j>=0;i++,j--){
        if(x_pos==-1 && ar[i]>Y){
            x_pos = i;
        }
        if(y_pos == -1 && ar[j]>Y){
            y_pos = j;
        }
        if(x_pos>-1 && y_pos>-1){
            break;
        }
    }
    cout<< X-(x_pos+(X-1-y_pos))<<endl;
    return 0; 
}