#include <bits/stdc++.h>

//F047_gunjan_agrawal
//gunjan agrawal
#define pi (3.141592653589)
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

ll ar[1000][1000];
map<pair<int,int>,bool>vis;
using namespace std;
void dfs(ll i,ll j,ll z)
{   ar[i][j]=z;
    vis[{i,j}]=true;
  //bring visited array
  if(vis[{i,j}])
  {
  if(ar[i+1][j]==1)
  {
    dfs(i+1,j,z);
  }
  if(ar[i-1][j]==1)
  {
    dfs(i-1,j,z);
  }
  if(ar[i][j-1]==1)
  {
    dfs(i,j-1,z);
  }
  if(ar[i][j+1]==1)
  {
    dfs(i,j+1,z);
  }}
}
void solve()
{
   int m,n,x,y,z;
   cin>>m>>n;
   rep(i,m+1)
   {
     repj(j,n+1)
     {
       cin>>ar[i][j];
     }
   }
   cin>>x>>y>>z;
   dfs(x,y,z);

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