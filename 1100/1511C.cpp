#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // int t;
    // cin >> t;
    // while(t--){
        ll n,q;
        cin >> n >> q;

        vector<ll> a(n), b(q);
        map<ll,ll> mp;

        for(int i=0; i<n; i++){
            cin >> a[i];
            if(mp.find(a[i]) != mp.end()){
                if(mp[a[i]] > i+1){
                    mp[a[i]] = i+1;
                }else{

                }
            }else{
                mp[a[i]] = i+1;
            }
        }

        for(int i=0; i<q; i++){
            cin >> b[i];
        }

        vector<ll> ans;
        for(int i=0; i<q; i++){
            ll tar = b[i];
            ll oldpos = mp[tar];
            ans.push_back(oldpos);
            
            for(auto& pr : mp){
                if(pr.second < oldpos) pr.second++;
            }
            
            mp[tar] = 1;
        }

        for(int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }cout << endl;
    // }
}
