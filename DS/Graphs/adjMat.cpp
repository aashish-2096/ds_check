#include<bits/stdc++.h>
using namespace std;

class Graph{
    bool **adjMat;
    int node;
    public:
    Graph(int nodes){
        this->node = nodes;
        adjMat = new bool*[node];

        for(int i = 0;i<nodes;i++){
            adjMat[i] = new bool[node];
            for(int j =0;j<node;j++)
                adjMat[i][j] = 0;
        }
    }

    void addEdge(int u,int v){
        adjMat[u][v] = 1;
        //adjMat[v][u] = 1;
    }

    void printMat(){
        for(int i =0;i<node;i++){
            for(int j = 0;j<node;j++){
                cout<<adjMat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(){
        for(int i = 0;i<node;i++){
            for(int j = 0;j<node;j++){
                if(adjMat[i][j] == 1)
                {
                    cout<<j+1<<" ";
                }
            }
        }
    }
};
int main()
{
    int node,u,v;
    cin>>node;
    Graph gp(node);
    for(int i =0;i<node;i++){
      cin>>u>>v;
      gp.addEdge(u-1,v-1);
    }
    gp.printMat();
    gp.bfs();
    return 0;
}