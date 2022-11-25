// All Pair

#include <iostream>
#include <climits>
#include <iomanip>
using namespace std;
#define N 4
#define M INT_MAX
void printPath(int path[][N], int v, int u)
{
    if (path[v][u] == v)
        return;

    printPath(path, v, path[v][u]);
    cout << path[v][u] << " ";
}
void printSolution(int cost[N][N], int path[N][N])
{
    for (int v = 0; v < N; v++)
    {
        for (int u = 0; u < N; u++)
        {
            if (u != v && path[v][u] != -1)
            {
                cout << "Shortest Path from " << v << " -> " << u << " is ("
                     << v << " ";
                printPath(path, v, u);
                cout << u << ")" << endl;
            }
        }
    }
}

void floydWarshall(int adjMatrix[][N])
{
    int cost[N][N], path[N][N];
    for (int v = 0; v < N; v++)
    {
        for (int u = 0; u < N; u++)
        {
            cost[v][u] = adjMatrix[v][u];

            if (v == u)
                path[v][u] = 0;
            else if (cost[v][u] != INT_MAX)
                path[v][u] = v;
            else
                path[v][u] = -1;
        }
    }

    for (int k = 0; k < N; k++)
    {
        for (int v = 0; v < N; v++)
        {
            for (int u = 0; u < N; u++)
            {
                if (cost[v][k] != INT_MAX && cost[k][u] != INT_MAX && cost[v][k] + cost[k][u] < cost[v][u])
                {
                    cost[v][u] = cost[v][k] + cost[k][u];
                    path[v][u] = path[k][u];
                }
            }

            if (cost[v][v] < 0)
            {
                cout << "Negative Weight Cycle Found!!";
                return;
            }
        }
    }
    printSolution(cost, path);
}

int main()
{
    int adjMatrix[N][N] =
        {
            {0, M, -2, M},
            {4, 0, 3, M},
            {M, M, 0, 2},
            {M, -1, M, 0}};
    floydWarshall(adjMatrix);

    return 0;
}