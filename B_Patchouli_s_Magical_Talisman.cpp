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
    int n;
    cin>>n;
    int a[n];
    rep(i,n)
    cin>>a[i];
    int e=0,o=0;
    rep(i,n)
    {
        if(a[i]&1)
        o++;
        else
        e++;
    }
    if(o>0)
    cout<<e<<endl;
    else
    {
        int ans = INT_MAX;
        rep(i,n)
        {
            if(!(a[i]&1))
            {
                int c=0;
                int temp=a[i];
                while(temp>0)
                {
                    temp/=2;
                    c++;
                    if(temp&1)
                    {
                        ans=min(ans,c);
                        break;
                    }
                }
            }
        }
        cout<<ans+e-1<<endl;
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