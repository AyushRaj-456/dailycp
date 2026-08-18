#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string T;
        cin >> T;
        vector<ll> toRem;
        vector<pair<ll,ll>> vis(n,{0,0});

        for(int i=0; i<n; i++){
            if(T[i] == '0') toRem.push_back(i+1);
        }

        unordered_set<ll> R(toRem.begin(), toRem.end());
        unordered_set<ll> claimed;
        ll cost = 0;
        for(ll k = 1; k <= n; k++){
        for(ll x = k; x <= n && R.count(x); x += k){
            if(!claimed.count(x)){
                claimed.insert(x);
                cost += k;
            }
        }
        }

        cout << cost << endl;
    }
}
