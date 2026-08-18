#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n),b(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vector<ll> pref_max(n);
        
        for(int j=0; j<n; j++){
            cin >> b[j];
            if(j == 0) pref_max[j] = b[j];
            else pref_max[j] = max(pref_max[j-1], b[j]);
        }
        
        // for(int i=0; i<n; i++){
        //     cout << pref_max[i] << " ";
        // }cout << endl;
        
        if(k==0){
            cout << 0 << endl;
            continue;
        }
        
        vector<ll> ans;
        ll ssum = 0;
        ll fans = 0;
        ll p = 0;

        for(int i=0; i<n; i++){
            p = i+1;
            ssum += a[i];
            if(p > k) break;
            ll temp = ssum + (k-(i+1))*pref_max[i];
            // ans.push_back(temp);
            fans = max(fans,temp);
        }

        cout << fans << endl;
    }
}
