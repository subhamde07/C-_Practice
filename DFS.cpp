#include"bits/stdc++.h"
using namespace std;
const int N = 1e5+10;

vector<int> g[N];
bool vis[N];

void dfs(int vertex)
{
    //Take action on the vertex after entering the vertex ===>
    // Preorder ->
    cout<<vertex<<" ";
    vis[vertex] = true;
    // Inorder ->
    for(int child : g[vertex])
    {
        //Take action on the child before entering the child node ===>
        // cout<<"Parent : "<<vertex<<", child : "<< child <<endl;
        if(vis[child])
            continue;
        dfs(child);
        //Take action on the child after leaving the child node ===>
    }
    //Take action on vertex after leaving the vertex ===>
}

int main()
{
    int n,e;
    cin >> n >> e;
    for(int i = 0; i <= n; i++)
    {
        vis[i] = false;
    }
    for(int i=0;i<e;i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    // Find the count components >>
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])
            continue;
        dfs(i);
        count++;     
    }
    cout<<count<<endl;
    return 0;
}

/*
vector<int> ::iterator i;
for(i = g[vertex].begin(); i != g[vertex].end(); ++i)
{
    if(vis[*i]);
    else
    {
        dfs(*i);
    }
}
*/