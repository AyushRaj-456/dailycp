#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n), b(q);
        vector<pair<ll,ll>> p(n);
        vector<ll> pref_sum(n);
        vector<ll> pMax(n);
        ll maxi_jump = INT_MIN;
        

        for(int i=0; i<n; i++){
            cin >> a[i];
            maxi_jump = max(maxi_jump, a[i]);
            
            if(i == 0){
                pref_sum[i] = a[i];
                pMax[i] = a[i];
            }
            else{
                pref_sum[i] = pref_sum[i-1] + a[i];
                pMax[i] = max(pMax[i-1], a[i]);
            }
            
            
        }

        vector<ll> ans;
        for(int i=0; i<q; i++){
            cin >> b[i];

            ll s = 0, e = n-1;
            ll targ = b[i];
            ll idx = -1;
            while(s <= e){
                ll m = (s+e)/2;

                if(pMax[m] == targ){
                    idx = m;
                    s = m+1;
                }else if(pMax[m] < targ){
                    s = m+1;
                }else if(pMax[m] > targ){
                    e = m-1;
                }
            }
            if(idx == -1) ans.push_back(0);
            else ans.push_back(pref_sum[idx]);
        }


        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }cout << endl;
    }
}
