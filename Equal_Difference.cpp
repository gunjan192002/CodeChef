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
{ 	int n; cin >> n;
		int arr[n];

		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		unordered_map<int, int> mp;

		if (n <= 2)
		{
			cout << 0 << endl;
		}
		else {

			for (int it : arr)
			{
				mp[it]++;
			}

			int mx_val = 0;

			for (auto it : mp)
			{
				if (it.second > mx_val)
				{
					mx_val = it.second;
				}
				// cout << mx_val << endl;
			}

			if (mx_val == 1)
			{
				cout << n - 2 << endl;
			} else {
				cout << (n - mx_val) << endl;
			}
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