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
 ll n,o,e=0,op=0;
 cin>>n;
 vector<ll>even;
    rep(i,2*n)
    { ll x;
        cin>>x;
        if(x%2==0)
        {
          even.push_back(x);
        }
    }
    e=even.size();
    o=(2*n) -e;
    if(o>=e)
    {
        cout<<(o-e)/2<<endl;
    }
    else 
    {    
        ll ar[o];
        for(int i=0;i<o;i++){
          ar[i]=0;
        do{
            ar[i]++;
        }while(even[i]%2!=0);

        }
        sort(ar,o+ar);
        rep(i,(o-e)/2)
        {
          op=ar[i]+op;
        }
        cout<<op<<endl;
        
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