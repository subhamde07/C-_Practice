#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
int vis[N];
int level[N];

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = 1;

    while (!q.empty())
    {
        int currentVertex = q.front();
        q.pop();
        cout << currentVertex << " ";
        for (int child : g[currentVertex])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = 1;
                level[child] = level[currentVertex] + 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bfs(1);
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << i << ": " << level[i] << endl;
    }
    return 0;
}