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
int fact(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * fact(n - 1);
}

void solve()
{   ll n,c,g,l,r,x;
    cin>>n;
    string input;
    cin>>input;
    ll result = 1;
    rep(i,n)
    {
        if(input[i]=='c' || input[i]=='g' || input[i]=='l'|| input[i]=='r')
        result = (result*2)%(ll)(1000000007);
    }
    cout<<result<<endl;
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