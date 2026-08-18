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

        ll lmin = min(0-a[0], b[0]-0); 
        ll lmax = max(0-a[0], b[0]-0);

        for(int i=1; i<n; i++){

            ll ta = lmax - a[i];
            ll tb = b[i] - lmin;

            ll ta1 = lmin - a[i];
            ll tb1 = b[i] - lmax;

            lmin = min(ta1,tb1);
            lmax = max(ta,tb);
        }
        
        cout << max(lmin, lmax) << endl;
    }
}