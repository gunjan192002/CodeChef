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
    string s;
     
     int i=0, n=s.size();
		while(i<n){
			if(s[i]=='p'){
				if(s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y'){
					s[i+2] = 'w';
					s[i+3] = 'r';
					s[i+4] = 'i';
					i+=5;
				}
				else
					i++;
			}
			else
				i++;
		}
		cout << s << "\n";
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