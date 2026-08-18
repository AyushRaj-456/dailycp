#include <bits/stdc++.h>
using namespace std;
#define ll long long

// ll fun(ll i, ll k, ll n, vector<ll>& a, vector<ll>& b,
//        vector<unordered_map<ll,ll>>& dp){

//     if(i >= n) return k;

//     if(dp[i].count(k))
//         return dp[i][k];

//     ll ta = fun(i+1, k - a[i], n, a, b, dp);
//     ll tb = fun(i+1, b[i] - k, n, a, b, dp);

//     return dp[i][k] = max(ta, tb);
// }

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n), b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        vector<ll> c(n);
        ll fans = 0;
        for(int i=0; i<n; i++){
            c[i] = max((0-a[i]), (b[i]-0));
            fans += c[i];
        }
        
        cout << fans << endl;
    }
}