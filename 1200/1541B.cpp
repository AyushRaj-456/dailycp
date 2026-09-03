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

        for(int i=0; i<n; i++) cin >> a[i];
        vector<pair<ll,ll>> vp;

        for(int i=0; i<n; i++) vp.push_back({a[i], i+1});
        

        sort(vp.begin(), vp.end());

        ll ans = 0;
        for(int i=n-1; i>0; i--){
            for(int j=0; j<i; j++){
                if(vp[i].first * vp[j].first <= ((2*n)-1)){
                    if( (vp[i].first * vp[j].first) == (vp[i].second + vp[j].second)) ans++;
                }
                else break;
                
            }
        }
        cout << ans << endl;
    }
}
