#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll n, ll k, unordered_map<ll,ll>& dp){

    if(n == k) return 1;
    if(n < k) return 1e18;

    if(dp.count(n)) return dp[n];

    if(n%2 == 0){
        return dp[n] = 1 + fun(n/2, k, dp);
    }else{
        return dp[n] = 1 + min(fun((n/2)+1, k, dp), fun(n/2,k, dp) );
    }
}



int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        unordered_map<ll,ll> dp;
        ll ans = fun(n,k,dp);

        if(ans >= 1e18) cout << -1 << endl;
        else cout << ans - 1 << endl;
    }
}
