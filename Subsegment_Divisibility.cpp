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
    if(n==3)
    {
        cout<<7<<" "<<2<<" "<<5<<endl;
        return;
    }
    int f = n/3;
    n=n%3;
    int i=7;
   
    for(i=7;i<=(7+9*(f-1));i+=9)
    {
        cout<<i<<" "<<i-5<<" "<<i-2<<" ";
    }
    if(n==0)
    cout<<endl;
    if(n==1)
    cout<<i<<endl;
    else if(n==2)
    cout<<i<<" "<<i-5<<endl;
    
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