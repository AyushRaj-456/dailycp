// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll total = 0;
        ll maxi_val = LLONG_MIN, global_max = LLONG_MIN;
        vector<ll> maxi(n), a(n), sum(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            total += a[i];

            if(i == 0) sum[i] = a[i];
            else sum[i] = sum[i-1] + a[i];

            maxi_val = max(maxi_val, a[i]);
            maxi[i] = maxi_val;
            global_max = max(global_max, maxi[i]);
        }

        // reverse(sum.begin(), sum.end());
        // cout << "maxi values :" << endl;
        // for(int i=0; i<n; i++) cout << maxi[i] << " ";
        // cout << endl;

        // cout << "sum values :" << endl;
        // for(int i=0; i<n; i++) cout << sum[i] << " ";
        // cout << endl;

        // cout << "Total : " << total << endl;

        vector<ll> ans(n);
        for(int i=0; i<n; i++){
            if(i==0) ans[i] = global_max;
            else{
                ans[i] = maxi[n-i-1] + (total - sum[n-i-1]);
            }
        }

        for(int i=0; i<n; i++) cout << ans[i] << " ";
        cout << endl;
    }
}
