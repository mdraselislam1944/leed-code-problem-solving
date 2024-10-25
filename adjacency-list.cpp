#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void showEdge(vector<int> adj[], int v) {
    for (int i = 0; i < v; i++) {
        cout << "Vertex " << i << ": ";
        for (int x : adj[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

int main() {
    int v = 5;
    vector<int> adj[v];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 4, 3);
    addEdge(adj, 3, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 4);
    addEdge(adj, 1, 3);

    showEdge(adj, v);

    return 0;
}
