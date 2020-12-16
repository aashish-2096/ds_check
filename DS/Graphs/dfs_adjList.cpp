#include<bits/stdc++.h>
using namespace std;

class Graph
{
    int nodes;
    list<int> *adjList;
    public:
    Graph(int node){
        this->nodes = node;
        adjList = new list<int>[nodes+1];
    }

    void addEdge(int u, int v){
        adjList[u].push_back(v);
        //adjList[v].push_back(u);
    }

    void printMatrix(){
        for(int i = 0;i<nodes;i++){
            cout<<"Node "<<i;
            for(auto ele:adjList[i]){
                cout<<ele<<" ";
            }
            cout<<endl;
        }
    }

    void dfs(vector<bool>&visited, int v){
        if(visited[v] == true)
        return;
        else{
            visited[v] = true;
            cout<<v<<" ";
            for(auto ele:adjList[v]){
                dfs(visited,ele);
            }   
        }
    }
};
int main(){
    int node,u,v;
    cin>>node;
    Graph gp(node);
    for(int i = 0;i<node;i++){
        cin>>u>>v;
        gp.addEdge(u,v);
    }
    gp.printMatrix();
    vector<bool>visited(node+1,false);
    gp.dfs(visited,1);
    return 0;
}