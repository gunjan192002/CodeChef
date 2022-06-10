#include <bits/stdc++.h>

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
using namespace std;
const int N=1e5+10;
vector<int>g[N];
bool vis[N];
queue<int>Q;


// 4
// 1
//3 2


void bfs(int vertex)
{
    vis[vertex]=true;
    for(auto child:g[vertex])
    {  
        if(vis[child])
        return;
        Q.push(child);
    }
    cout<<" "<<Q.front();
    Q.pop();
    bfs(Q.front());

}
void solve()
{
ll x, y;
    cin >> x >> y;
    for (int i = 0; i < y; i++)
    {
        ll v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    Q.push(1);
    bfs(1);
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