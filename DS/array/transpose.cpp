#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,M;
    cin>>N>>M;
    int ar[N][M];
    int tr[M][N];
    for(int i=0;i<N;i++){
        for(int j =0;j<M;j++){
            cin>>ar[i][j];
        }
    }
      for(int i=0;i<N;i++){
        for(int j =0;j<M;j++){
            tr[j][i] = ar[i][j];
        }
    }

    for(int i=0;i<M;i++){
        for(int j =0;j<N;j++){
            cout<<tr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}