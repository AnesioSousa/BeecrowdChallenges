#include <cstdio>
#include <iostream>
#include <queue>
#include <set>
#include <vector>

using namespace std;

typedef pair<float, pair<int, int>> Edge;

vector<Edge> prim(vector<pair<int, int>> adj[], int V) {
    priority_queue<Edge, vector<Edge>, greater<Edge>> candidates;
    set<int> partial_solution;
    vector<Edge> edges_sol;
    int i;

    // Pega o vértice inicial
    partial_solution.insert(0);

    // Coloca todas as ligações dele na lista
    for (auto e : adj[0])
        candidates.push(make_pair(e.first, make_pair(0, e.second)));

    while (partial_solution.size() < V) {
        Edge edge = candidates.top();
        candidates.pop();

        if (!partial_solution.count(edge.second.first) || !partial_solution.count(edge.second.second)) {
            partial_solution.insert(edge.second.second);
            edges_sol.push_back(edge);

            for (auto e : adj[edge.second.second])
                candidates.push(make_pair(e.first, make_pair(edge.second.second, e.second)));
        }
    }

    return edges_sol;
}

void addEdge(vector<pair<int, int>> adj[], int u, int v, int peso) {
    adj[u].push_back(make_pair(peso, v));
    adj[v].push_back(make_pair(peso, u));
    typedef pair<float, pair<int, int>> Edge;
}

int main() {
    int vertices, arestas, u, v, peso, sum = 0, peso_total = 0;
    vector<Edge> ret;

    while (scanf("%d %d", &vertices, &arestas) == 2 && !(vertices == 0 && arestas == 0)) {
        vector<pair<int, int>> graph[vertices];

        for (size_t i = 0; i < arestas; i++) {
            scanf("%d %d %d", &u, &v, &peso);
            peso_total += peso;

            addEdge(graph, u, v, peso);
        }

        ret = prim(graph, vertices);
        for (vector<Edge>::iterator it = ret.begin(); it != ret.end(); ++it) {
            sum += (*it).first;
        }

        printf("%d\n", peso_total - sum);
        peso_total = 0;
        sum = 0;
        ret.clear();
    }

    return 0;
}