#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n);
        vector<ll> pref_sum(n);
        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i+1;
        }

        sort(a.begin(), a.end());

        for(int i=0; i<n; i++){
            if(i == 0) pref_sum[i] = 0;
            else pref_sum[i] = pref_sum[i-1] + a[i-1].first;
        }

        vector<ll> ans(n);
        for(int i=0; i<n; i++){
            ll score = pref_sum[i];
            if(score == 0) ans[i] = 0;
            else{
                // ll targ = score;
                ll s = 0, e = n-1;
                while(s <= e){
                    ll m = (s+e)/2;
                    if(a[m].first == score){
                        if(m+1 < n && a[m+1].first == score){
                            s = m + 1;
                        }else if(m+1 < n && a[m+1].first != score){
                            ans[a[m].second] = m-1;
                        }
                    }
                    else if(a[m].first < score) s = m + 1;
                    else if(a[m].first > score) e = m - 1;
                }
            }
            
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}