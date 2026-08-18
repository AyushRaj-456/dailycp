#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<ll> pref(n), suff(n);
        pref[0] = a[0];
        for(int i=1; i<n; i++) pref[i] = min(pref[i-1], a[i]);
        suff[n-1] = a[n-1];
        for(int i=n-2; i>=0; i--) suff[i] = max(suff[i+1], a[i]);

        vector<ll> ans(n);
        for(int i=0; i<n; i++)
            if(a[i] == pref[i] || a[i] == suff[i]) ans[i] = 1;
            else ans[i] = 0;

        for(int i=0; i<n; i++) cout << ans[i];
        cout << endl;
    }
}