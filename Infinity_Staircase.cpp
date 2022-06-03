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
{
    ll n,k,z;
    cin>>n;
    n=n-1;
    k=n/10;
    z=n%10;
    if(z==0)
    {
        cout<<k*4+0<<endl;
    }
    else if(z<4)
    {
         cout<<k*4+1<<endl;

    }
     else if(z<6)
    {
                 cout<<k*4+2<<endl;

    }
     else if(z<9)
    {
        cout<<k*4+3<<endl;
    }
    else 
    cout<<k*4+4<<endl;
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