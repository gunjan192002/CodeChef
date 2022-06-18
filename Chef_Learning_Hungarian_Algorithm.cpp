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
    int m[n][n],r[n],c[n];
    rep(i,n)
    {     int count =0;
        repj(j,n)
        {
            cin>>m[i][j];
            if(m[i][j]==0)
            {
            count++;}
        }
        r[i]=count; 
    }
    rep(i,n)
    {
        if(r[i]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    rep(i,n)
    {     int count =0;
        repj(j,n)
        {    if(m[j][i]==0)
        {
            count++;

        }
        }
        c[i]=count; 
    }
     rep(i,n)
    {
        if(c[i]==0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;


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