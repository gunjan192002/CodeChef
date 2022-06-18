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
    ll k,l,m,r,q,n,x;
    cin>>n;
    ll ar[n],a[n];
    rep(i,n)
    {
        cin>>ar[i];
    }
    cin>>q;
    ll qr[q][3];
    rep(i,q)
    {
        cin>>qr[i][0];
                cin>>qr[i][1];
                        cin>>qr[i][2];
    }
    rep(i,q)
    {     int  count=0;
         for(int i=qr[i][0];i<=qr[i][1];i++) 
         {
            if((ar[i]^qr[i][2])>(ar[i]&qr[i][2]))
            {
             count++;   
            }
         }
         cout<<count<<endl;
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