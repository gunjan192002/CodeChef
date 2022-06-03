#include <bits/stdc++.h>

// F047_gunjan_agrawal
// gunjan agrawal
#define pi (3.141592653589)
#define M 1e9 + 7
#define ll long long int
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define f first
#define s second
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define repj(j, n) for (int j = 0; j < n; j++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ps(x, y) fixed << setprecision(y) << x
#define pii pair<int, int>
#define vi vector<int>

using namespace std;

void solve()
{
    ll n, m, x = 0, y, z; // x=sum
    vi v;
    cin >> n >> m;
    ll ar[n + 1][m + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> ar[i][j];
        }
    }
    
    
    for (int i = 1; i < m + 1; i++)
    {
        y = 1;
        z = i;
        while ((y <= n) && (z <= m))
        {
            x = x + ar[y][z];
            y++;
            z++;
        }
        v.push_back(x);
        x=0;
    }
    x = 0;
    for (int i = 2; i <= n; i++)
    {
        y = i;
        z = 1;
        while ((y <= n) && (z <= m))
        {
            x = x + ar[y][z];
            y++;
            z++;
        }
        v.push_back(x);
        x=0;
    }
    x = 0;

    for (int i = 1; i < m + 1; i++)
    {
        y = 1;
        z = i;
        while ((y <= n) && (z <= 0))
        {
            x = x + ar[y][z];
            y++;
            z--;
        }
        v.push_back(x);
        x=0;
    }
    x = 0;
    for (int i = 2; i < n + 1; i++)
    {
        y = i;
        z = m;
        while ((y <= n) && (z <= 0))
        {
            x = x + ar[y][z];
            y++;
            z--;
        }
        v.push_back(x);
        x=0;
    }

    sort(v.begin(), v.end());
    cout << v[v.size()-1] << endl;
}

int32_t main()
{
    fast
        // cooldude69.
        int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
