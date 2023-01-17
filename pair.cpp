#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
    // pair --->
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> p[3];

    // p[0] = make_pair(1, 4);
    // p[1] = {2, 5};
    // p[2] = {3, 6};
    // swap(p[0], p[2]);

    for (int i = 0; i < 3; i++)
    {
        cin >> p[i].first >> p[i].second;
    }
    for(int i = 0; i < 3; i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    */

   // Vector ---->

    vector<int> v;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);    //add element at last in vector. 0(1) 
    }

   return 0;
}