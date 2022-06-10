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
// count=0;
// while(n!=0){
//   n = n&(n-1);
//   count++;
// }
ll st(ll n,ll x)
{
    ll t=1;
    t=t<<(x-1);
    return (n|t);

}

void solve()
{
    ll n,k,x,y=1,z=1,sum=0;
    cin>>n>>k;
    if(k<=n)
    {
        cout<<k<<endl;
    }
    else 
  { 
       while((k-(st(z,y)*n))>=0)
    {
        sum=sum+(st(z,y)*n);
        y++;  
    }
    cout<<(sum+(st(z,y)*()))
  }
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