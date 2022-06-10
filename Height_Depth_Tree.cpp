#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>g[N];
int depth[N];
int height[N];
 void dfs(int vertex,int parent=0)
 {
    if(g[vertex]==parent) 
    {
        cout<<"land;";
    }   
 }
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<y;i++)
    {   int v1,v2;
        g[v1].push_back(v2);
                g[v2].push_back(v1);
    }
    dfs(1);
    return 0;
}