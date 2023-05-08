#include <cstdio>
#include <queue>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

typedef pair<float, pair<int, int>> Edge;

vector<Edge> prim(vector<pair<int, int>> adj[], int V)
{
    priority_queue<Edge, vector<Edge>, greater<Edge>> candidates;
    set<int> partial_solution;
    vector<Edge> edges_sol;
    int i;

    // Pega o vértice inicial
    partial_solution.insert(0);

    // Coloca todas as ligações dele na lista
    for (auto e : adj[0])
        candidates.push(make_pair(e.first, make_pair(0, e.second)));

    while (partial_solution.size() < V)
    {
        Edge edge = candidates.top();
        candidates.pop();

        if (!partial_solution.count(edge.second.first) || !partial_solution.count(edge.second.second))
        {
            partial_solution.insert(edge.second.second);
            edges_sol.push_back(edge);

            for (auto e : adj[edge.second.second])
                candidates.push(make_pair(e.first, make_pair(edge.second.second, e.second)));
        }
    }

    return edges_sol;
}

void addEdge(vector<pair<int, int>> adj[], int u, int v, int peso)
{
    adj[u].push_back(make_pair(peso, v));
    adj[v].push_back(make_pair(peso, u));
    typedef pair<float, pair<int, int>> Edge;
}

int main()
{
    int V = 9, sum = 0;
    vector<pair<int, int>> graph[V];
    vector<Edge> ret;

    addEdge(graph, 0, 1, 4);
    addEdge(graph, 1, 2, 8);
    addEdge(graph, 2, 3, 7);
    addEdge(graph, 3, 4, 9);
    addEdge(graph, 4, 5, 10);
    addEdge(graph, 5, 6, 2);
    addEdge(graph, 6, 7, 1);
    addEdge(graph, 7, 0, 8);
    addEdge(graph, 1, 7, 11);
    addEdge(graph, 7, 8, 7);
    addEdge(graph, 8, 2, 2);
    addEdge(graph, 2, 5, 4);
    addEdge(graph, 5, 3, 14);

    ret = prim(graph, V);

    for (vector<Edge>::iterator it = ret.begin(); it != ret.end(); ++it)
    {
        cout << ' ' << (*it).first << ' ' << (*it).second.first << ' ' << (*it).second.second << endl;
    }

    return 0;
}
