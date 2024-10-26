#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void dfs(vector<vector<int>>& adj, int s) {
    stack<int> st;
    vector<bool> visited(adj.size(), false);
    st.push(s);
    visited[s] = true;

    while (!st.empty()) {
        int current = st.top();
        st.pop();
        cout << current << " ";
        for (auto it = adj[current].rbegin(); it != adj[current].rend(); ++it) {
            if (!visited[*it]) {
                visited[*it] = true;
                st.push(*it);
            }
        }
    }
}

int main() {
    int v = 5;
    vector<vector<int>> adj(v);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 4);

    cout << "DFS traversal starting from node 0: ";
    dfs(adj, 0);
    cout << endl;
    return 0;
}
