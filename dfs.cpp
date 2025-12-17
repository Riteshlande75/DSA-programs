#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[100];     // adjacency list
bool visited[100];        // visited array

// DFS function
void dfs(int node) {
    visited[node] = true;
    cout << node << " ";

    // Visit all unvisited neighbours
    for (int next : adj[node]) {
        if (!visited[next]) {
            dfs(next);
        }
    }
}

int main() {
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter number of edges: ";
    cin >> e;


    int u,v;
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);  // for undirected graph
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    // Initialize visited array
    for (int i = 0; i < n; i++)
        visited[i] = false;

    cout << "DFS Traversal: ";
    dfs(start);

    return 0;
}
