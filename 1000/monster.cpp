// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        pair<ll,ll> p[n];
        for(int i=0; i<n; i++){
            cin >> a[i];

            ll rem = a[i] % k;
            if(rem == 0) rem =k;
            p[i] = { rem, -(i+1)};
        }

        sort(p, p+n, greater<pair<ll,ll>>());
        // for(int i=0; i<n; i++){
        //     cout << p[i].first << " " << p[i].second << endl;
        // }

        for(int i=0; i<n; i++){
            cout << -1*p[i].second << " ";
        }cout << endl;
    }
}
