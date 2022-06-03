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
    ll n,m,k,count=0;// k=min
    cin>>n>>m;
    ll x[2],y[2];
     x[0]=m,y[0]=n;
    int ar[n+1][m+1];
    char c;
    vi v;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>c;

            if(c=='R')
            {   if(j<=x[0]){x[0]=j;}
                if(i<=y[0]){y[0]=i;}
                
                v.push_back(i+j);
                ar[i][j]=(i+j);
            }
            else             
               ar[i][j]=(0);

        }
    }
    sort(v.begin(),v.end());
    for(int i=1;i<v.size();i++)
    {
        if(v[0]==v[i])
    {
                    cout<<"NO"<<endl;
                    return ;

        }
    }

        for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(ar[i][j]==v[0])
            {
                x[1]=j;y[1]=i;
            }
        }}
        if(x[0]==x[1]&&y[0]==y[1])
        {
        cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;

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