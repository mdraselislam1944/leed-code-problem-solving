#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<vector<int>>& adjMatrix, int u, int v) {
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
}

void showEdge( vector<vector<int>>& adjMatrix) {
    int v = adjMatrix.size();
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int v = 5;
    vector<vector<int>> adjMatrix(v, vector<int>(v, 0));


    addEdge(adjMatrix, 0, 1);
    addEdge(adjMatrix, 0, 4);
    addEdge(adjMatrix, 4, 3);
    addEdge(adjMatrix, 3, 2);
    addEdge(adjMatrix, 1, 2);
    addEdge(adjMatrix, 1, 4);
    addEdge(adjMatrix, 1, 3);


    showEdge(adjMatrix);

    return 0;
}
