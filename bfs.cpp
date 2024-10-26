#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void addEdge(vector<vector<int>>&adj,int u,int v){
adj[u].push_back(v);
adj[v].push_back(u);
}

void bfs(vector<vector<int>>&adj,int s){
    queue<int>q;
    vector<bool>visited(adj.size(),false);
    q.push(s);
    visited[s]=true;
    while(!q.empty()){
        int current=q.front();
        q.pop();
        cout<<current<<" ";
        for(int i:adj[current]){
            if(!visited[i]){
                q.push(i);
                visited[i]=true;
            }
        }
    }
}

int main(){
int v=5;
vector<vector<int>>adj(v);
addEdge(adj, 0, 1);
addEdge(adj, 0, 2);
addEdge(adj, 1, 3);
addEdge(adj, 1, 4);
addEdge(adj, 2, 4);
bfs(adj,0);
return 0;
}
