#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vvll vector<vector<ll>>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vvll mat(n, vll(n,0));
        vvll vis(n, vll(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                char c;
                cin >> c;
                mat[i][j] = c - '0';
            }
        }
        ll ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(vis[i][j]) continue;
                ll ci = i;
                ll cj = j;
                ll ones = 0;
                ll cnt = 0;
                for(int k=0; k<4; k++){
                    if(!vis[ci][cj]){
                        vis[ci][cj] = 1;
                        ones += mat[ci][cj];
                        cnt++;
                    }
                    ll ni = cj;
                    ll nj = n-1-ci;
                    ci = ni;
                    cj = nj;
                }
                ans += cnt - max(ones, cnt-ones);
            }
        }
        cout << ans << endl;
    }
}