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
int lcs ( int i,int j,string &a,string &b)
{
  if((i<0)||(j<0))return 0;
  int  ans=lcs(i-1,j,a,b);
  ans=max(ans,lcs(i,j-1,a,b));
   if(a[i]==a[j])ans=max(ans,lcs(i-1,j-1,a,b)+1);
   return ans ;



}

void solve()
{
    int n,x,y,z;
    string a,b;
    cin>>a>>b;
   cout<< lcs(a.size(),b.size(),a,b)-1;
    
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