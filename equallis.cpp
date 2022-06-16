#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n==2){
            cout << "NO\n";
        }else{
            cout << "YES\n";
            if(n % 2 == 1){
                for(int i = 1; i <= n; i += 2){
                    cout << i << ' ';
                }
                for(int i = n - 1; i > 0; i -= 2){
                    cout << i << ' ';
                }
                cout << endl;
            }else{
                for(int i = 1; i <= n/2; i += 1){
                    cout << i << ' ';
                }
                for(int i = n; i > n/2; i -= 1){
                    cout << i << ' ';
                }
                cout << endl;
            }
        }
    }
}