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
    int n,s;
    cin>>n>>s;
    int a[n];
    rep(i,n)
    cin>>a[i];
    ll sum=0; ll res=0;
    rep(i,n)
    sum+=a[i];
    if(sum<s)
    cout<<-1<<endl;
    else if(sum==s)
    cout<<0<<endl;
    else
    {
        vi f;
        vi b;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]&1)
            {
                f.push_back(i-j+1);
                j=i+1;
            }
        }
        j = n-1;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]&1)
            {
                b.push_back(j-i+1);
                j=i-1;
            }
        }
        reverse(b.begin(),b.end());
        rep(i,f.size())
        cout<<f[i]<<" ";
        cout<<endl;
        rep(i,b.size())
        cout<<b[i]<<" ";
        cout<<endl;
        // 7 2 5 16 11 14 25 20 23
        int p1=0,p2=b.size()-1;
        while(p1<=p2)
        {
            if(sum>s)
            {
                if(f[p1]<b[p2])
                {
                    res+=f[p1];
                    p1++;
                    sum--;
                }
                else
                {
                    res+=b[p2];
                    p2--;
                    sum--;
                }
            }
            else
            {
                break;
            }
        }
        cout<<res<<endl;
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