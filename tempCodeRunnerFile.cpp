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

int findGCD(int arr[], int n,int x)
{
    int result = arr[x];
    for (int i = x+1; i < n; i++)
    {
        result = __gcd(arr[i], result);
  
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void solve()
{
int n ;
cin >> n ;
int a[n];
rep(i,n){
    cin >> a[i];
}
    int count =0 ;
    if(findGCD(a,n,0)== 1)
    cout << 0 << endl;
    else {
    rep(i,n){
     if(__gcd(findGCD(a,i,0),findGCD(a,n,i+1))!=1 )
      count ++;
    }
    cout << count << endl;
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