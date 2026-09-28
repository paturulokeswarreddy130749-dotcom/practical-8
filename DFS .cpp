#include <iostream>
using namespace std;

int graph[100][100];
bool visited[100] = {false};
int n;

void DFS(int v)
{
    visited[v] = true;

    cout << v << " ";

    for (int i = 0; i < n; i++)
    {
        if (graph[v][i] == 1 && !visited[i])
        {
            DFS(i);
        }
    }
}

int main()
{
    int start;

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start);

    return 0;
}
