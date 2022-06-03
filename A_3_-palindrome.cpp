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

void solve()
{   string s;
    ll n ,k;
    cin>>n;
   s.push_back('a');
      s.push_back('a');
      for(int i=2;i<n;i++)
      {   if(s[i-1]=='a'&&s[i-2]=='a')
         {for(int j=0;j<2;j++)
          {
              s.push_back('b');
          }}
          if(s[i-1]=='b'&&s[i-2]=='b')
         {for(int j=0;j<2;j++)
          {
              s.push_back('a');
          }}

     }
      cout<<s.substr(0,n)<<endl;

}
int32_t main()
{
    fast
    //cooldude69.
    int t;
    t=1;
    while(t--)
    {
    solve();
    }
    return 0;
}