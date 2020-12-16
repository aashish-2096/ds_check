#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int nodes;
    list<int> *adjList;
    public:
    Graph(int node){
        this->nodes = node+1;
        adjList = new list<int>[nodes];
    }

    void addEdge(int u, int v){
        adjList[u].push_back(v);
        //adjList[v].push_back(u);
    }

    void printMatrix(){
        for(int i = 0;i<nodes;i++){
            cout<<"Node "<<i;
            for(auto ele : adjList[i]){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int v){
        bool *visited = new bool[nodes];
        for(int i =0;i<nodes;i++)
        visited[i] = false;
        visited[v] = true;
        list<int>qlist;
        qlist.push_back(v);
        while(!qlist.empty()){
            int val = qlist.front();
            cout<<val;
            qlist.pop_front();
            for(auto ele: adjList[val]){
                if(!visited[ele]){
                    visited[ele] = true;
                    qlist.push_back(ele);
                }
            }
        }
    }
};
int main(){
    int node,u,v;
    cin>>node;
    Graph gp(node);
    for(int i =0;i<node;i++){
        cin>>u>>v;
        gp.addEdge(u,v);
    }
    gp.printMatrix();
    gp.bfs(1);
    return 0;
}