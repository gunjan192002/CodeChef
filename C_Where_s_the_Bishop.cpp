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

char tmp;

void solve()
{

     char arr[8][8];
     for(int i = 0; i < 8; i++){
         for(int j = 0; j < 8; j++){
             cin >> arr[i][j];
         }
     }
     for(int i = 0; i < 8; i++){
         for(int j = 0; j < 6; j++){
             if(arr[i][j] == '#' && arr[i][j+2] == '#'){
                 cout << i + 2 << ' ' << j + 2 << '\n';
                 return;
             }
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
    cin.ignore();
    solve();
    }
    return 0;
}