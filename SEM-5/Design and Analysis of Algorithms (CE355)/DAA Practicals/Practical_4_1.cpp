// Program to implement Kruskal’s algorithm using greedy method.
// Kruskal's algorithm in C++

#include <iostream>
#include <algorithm>
using namespace std;
int counter = 0;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges; // variables declaration
pair<long long, pair<int, int>> p[MAX];
void init()
{
    for (int i = 0; i < MAX; ++i)
        id[i] = i;
}
int root(int x)
{
    while (id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}
void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}
// function to find the minimum cost spanning tree
long long kruskal(pair<long long, pair<int, int>> p[])
{
    int x, y;
    long long cost, minimumCost = 0;

    for (int i = 0; i < edges; ++i)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        if (root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }
        counter++;
    }
    return minimumCost;
}
int main()
{
    int x, y;
    long long weight, cost, minimumCost;
    init();
    cout << "Enter Nodes and edges";
    cin >> nodes >> edges;
    for (int i = 0; i < edges; ++i)
    {
        cout << "Enter the value of X, Y and edges";
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << "Minimum cost is " << minimumCost << endl;
    cout << "Counter: " << counter << endl;
    return 0;
}