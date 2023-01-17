#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

void dfs(int i, int j, int initialcolor, int newcolor, vector<vector<int>> &image)
{
    int n = image.size();
    int m = image[0].size();
    if(i<0 || j<0)
        return;
    if (i >= n || j >= n)
        return;
    dfs(i - 1, j);
    dfs(i + 1, j);
    dfs(i, j - 1);
    dfs(i, j+1);
}

vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
}