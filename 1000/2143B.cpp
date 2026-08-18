#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll t;
    cin >> t;

    while(t--) {
        ll n,k;
        cin >> n >> k;
        
        vector<ll> a(n),b(k), pref(n,0);
        for(int i=0; i<n;i++){
              cin >> a[i];
        }
        
        for(int i=0;i<k;i++){
            cin >> b[i];
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        for(int i=0; i<n; i++) {
            // cout << a[i] << " ";
            if(i == 0 ) pref[i] = a[i];
            else pref[i] = pref[i-1] + a[i];
        }
        // cout << endl;
        
        // for(int i=0; i<k; i++) cout << b[i] << " ";
        // cout << endl;
        
        // for(int i=0; i<n; i++) cout << pref[i] << " ";
        // cout << endl;
        
        int j = n-1;
        ll ans = 0;
        for(int i=0; i<k;i++){
            if(b[i] == 1) j--;
            else{

                if(j+1 == b[i]) {
                  ans += pref[j] - pref[0];
                  j = -1;
                  break;
              }
              else if(j+1 < b[i]){
                ans += pref[j];
                j = -1;
                break;
            }
            
                  ll kk = ( pref[j] - (pref[j - b[i]+1]));
                  ans += kk;
                  j -= b[i];
                  if(j < 0) break;
            }
        }
        if(j >= 0) ans += pref[j];
        
        cout << ans << endl;
    }

    return 0;
}