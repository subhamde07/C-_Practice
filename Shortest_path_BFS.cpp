#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

vector<int> g[N];
int vis[N];
int level[N];

void bfs(string s1, string s2)
{
    queue<int> q;

    
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << bfs(s1, s2) << endl;
    }
    return 0;
}