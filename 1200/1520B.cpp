#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        vll a(n);
        map <ll,ll> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            a[i] = a[i] - i;
            mp[a[i]]++;
        }

        ll ans = 0;
        for(auto it : mp){
            ll tt = it.second - 1;
            ans += (tt * (tt + 1)) / 2;
        }
        cout << ans << endl;
    }
}
