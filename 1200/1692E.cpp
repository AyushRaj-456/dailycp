#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,s;
        cin >> n >> s;
        vll a(n), pos;
        ll ts = 0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            ts += a[i];
            if(a[i] == 1){
                pos.push_back(i);
            }
        }
        
        if(ts < s){
            cout << -1 << endl;
            continue;
        }
        
        if(ts == s){
            cout << 0 << endl;
            continue;
        }
        
        ll m = pos.size();
        ll need = ts - s;
        ll ans = 1e18;
        
        for(ll i = 0; i <= need; i++){
            ll j = need - i;
            
            ll frontCost = 0;
            if(i > 0) frontCost = pos[i-1] + 1;
            
            ll backCost = 0;
            if(j > 0) backCost = n - pos[m-j];
            
            ll total = frontCost + backCost;
            ans = min(ans, total);
        }
        
        cout << ans << endl;
    }
}