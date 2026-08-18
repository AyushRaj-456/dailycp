// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,q;
        ll s = 0;
        cin >> n >> k >> q;
        vector<ll> a(n);
        vector<ll> days;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] <= q) s++;
            else{
                if(s >= k) days.push_back(s);
                s = 0;
            }
        }
        if(s >= k) days.push_back(s);
        ll ans = 0;
        for(int i=0;i<days.size();i++){
            ll x = days[i];
            ll val = (x-k+1);
            ans += val*(val+1)/2;
        }
        cout << ans << endl;
    }
}
