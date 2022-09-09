#include <bits/stdc++.h>
#include<algorithm>

//F047_gunjan_agrawal
//gunjan agrawal
#define pi (3.141592653589)
#define M 1e9+7
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define repj(j,n) for(int j=0;j<n;j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x,y) fixed<<setprecision(y)<<x
#define pii pair<int,int>
#define vi vector<int>
const int N=1e5+10;
static vector<int>g[N];
ll height[N],depth[N];
void dfs(int vertex,int parent=0)
{
    if(g[vertex]==parent)return;
    for(auto child:g[vertex])
    {
        depth[child]=depth[vertex]+1;
        dfs(child,vertex);
        height[vertex]=max(height[child],height[vertex])+1;
    }
}
using namespace std;
void solve()
{
    ll x,y;
    cin>>x>>y;
    for( int i=0;i<y;i++)
    {
        ll v1,v2;
        cin>>v1>>v2;
        g[v1].push_back(v2);
                g[v2].push_back(v1);
    }
    dfs(1);

}


int32_t main()
{
    fast
    //cooldude69.
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
    return 0;
}