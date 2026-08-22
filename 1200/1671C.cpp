#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, x;
        cin >> n >> x;

        vll a(n), pref(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(),a.end());
        for(int i=0; i<n; i++){
            if(i == 0) pref[i] = a[i];
            else pref[i] = pref[i-1] + a[i];
        }

        ll ans = 0;
        vll res(n);
        for(int i=0; i<n; i++){

            // ll d = (x - pref[i]);
            // ans = (d/(i+1)) + 1;
            // if(ans <= 0) ans = 0;
            // res[i] = ans;
            
            // here, negative d truncates toward 0 in C++, not floor — check pref[i] > x before dividing
            
            if (pref[i] > x) res[i] = 0;
            else res[i] = (x - pref[i]) / (i + 1) + 1;
        }

        ll fans = res[n-1]*n;
        for(int i=n-2; i>=0; i--){
            ll tt = abs(res[i] - res[i+1]);
            fans += tt*(i+1);
        }

        if(fans < 0) cout << 0 << endl;
        else cout << fans << endl;
    }
}
