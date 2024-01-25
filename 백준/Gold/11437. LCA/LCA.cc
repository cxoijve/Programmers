#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 50000;
const int LOG = 16; // 2^16 is greater than 50000
int depth[MAX + 1];
int parent[MAX + 1][LOG + 1];
vector<int> graph[MAX + 1];

void dfs(int node, int par) {
    depth[node] = depth[par] + 1;
    parent[node][0] = par;

    for (int i = 1; i <= LOG; i++) {
        parent[node][i] = parent[parent[node][i - 1]][i - 1];
    }

    for (int child : graph[node]) {
        if (child != par) {
            dfs(child, node);
        }
    }
}

int LCA(int a, int b) {
    if (depth[a] < depth[b]) swap(a, b);

    for (int i = LOG; i >= 0; i--) {
        if (depth[a] - (1 << i) >= depth[b]) {
            a = parent[a][i];
        }
    }

    if (a == b) return a;

    for (int i = LOG; i >= 0; i--) {
        if (parent[a][i] != parent[b][i]) {
            a = parent[a][i];
            b = parent[b][i];
        }
    }

    return parent[a][0];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, u, v;
    cin >> N;

    for (int i = 0; i < N - 1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    depth[0] = -1;
    dfs(1, 0);

    cin >> M;
    while (M--) {
        cin >> u >> v;
        cout << LCA(u, v) << "\n";
    }

    return 0;
}
