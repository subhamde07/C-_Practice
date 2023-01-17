
/*
#include <iostream>
#include<vector>
using namespace std;
const int N = 1e3+10;
int graph[N][N];

vector<int> graph2[N];

int main(){
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int v1, v2;
        cin >> v1 >> v2;

        //Adjacency matrix ----->
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;

        //Adjacency Lits ----->
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
}
*/

// When weights given ---->

#include <iostream>
#include <vector>
using namespace std;
const int N = 1e3 + 10;
int graph1[N][N];

vector<pair<int, int>> graph2[N];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2, wt;
        cin >> v1 >> v2 >> wt;

        // Adjacency matrix ----->
        graph1[v1][v2] = wt;
        graph1[v2][v1] = wt;

        // Adjacency Lits ----->
        graph2[v1].push_back({v2, wt});
        graph2[v2].push_back({v1, wt});
    }
}
/*
// i, j connected or not ----->

// Adjacency matrix ----->
if (graph1[i][j] == 1)
{
    connect;
}
graph1[i][j] // print Wight

// Adjacency Lits ----->
for (int child : graph2[i])
{
    if (child: graph2[i])
    {
        connect;
    }
}

for (pair<int, int> child : graph2[i])
{
    if (child.first == j)
    {
        connect;
        child.second // print Wight
    }
}
*/