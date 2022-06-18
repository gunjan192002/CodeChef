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
int _lis(int arr[], int n, int* max_ref)
{
	
	if (n == 1)
		return 1;

	int res, max_ending_here = 1;

	
	for(int i = 1; i < n; i++)
	{
		res = _lis(arr, i, max_ref);
		if (arr[i - 1] <= arr[n - 1] &&
			res + 1 > max_ending_here)
			max_ending_here = res + 1;
	}

	if (*max_ref < max_ending_here)
		*max_ref = max_ending_here;

	return max_ending_here;
}

int lis(int arr[], int n)
{
	
	int max = 1;

	_lis(arr, n, &max);

	return max;
}

void solve()
{
   ll n,k;
    cin>>n>>k;
     int ar1[n],ar2[k];
    rep(i,n)
    {
        cin>>ar1[i];
    }
    rep(i,k)
    {
        cin>>ar2[i];
    }
    cout<<lis(ar1,n)+lis(ar2,k)<<endl;
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