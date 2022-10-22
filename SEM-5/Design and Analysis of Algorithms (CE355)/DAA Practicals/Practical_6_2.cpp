#include <bits/stdc++.h>
using namespace std;
int minDistance(int dist[], bool visited[], int V)
{
    int min_index = 0;
    int min = INT_MAX;
    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && dist[i] <= min)
        {
            min_index = i;
            min = dist[i];
        }
    }
    return min_index;
}
void dijkstra(int V, int source_index)
{
    int graph[V][V];
    memset(graph, 0, sizeof(graph));
    cout << "Consider Undirected Graph starts with index 0.\n";
    for (int i = 0; i < V; i++)
    {
        int n;
        cout << "Enter how many edges are connected with vertex " << i << ": ";
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            int vertex, weight;
            cout << "Enter which vertex is connected with " << i << " and weight of it: ";
            cin >> vertex >> weight;
            graph[i][vertex] = weight;
        }
        cout << "\n";
    }
    bool visited[V];
    int dist[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[source_index] = 0;
    for (int i = 0; i < V; i++)
    {
        int u = minDistance(dist, visited, V);
        visited[u] = true;
        for (int v = 0; v < V; v++)
        {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
        }
    }
    for (int i = 0; i < V; i++)
    {
        if (dist[i] == INT_MAX)
            cout << "Distance from " << source_index << " to " << i << " is infinite\n";
        else
            cout << "Distance from " << source_index << " to " << i << " is: " << dist[i] << "\n";
    }
}
int main()
{
    int V;
    cout << "Enter total vertex: ";
    cin >> V;
    int source;
    cout << "Enter Source Index: ";
    cin >> source;
    dijkstra(V, source);
    cout << "\n20DCE019-Yatharth Chauhan";

    return 0;
}
