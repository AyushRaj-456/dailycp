#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<ll,ll> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];

            if(mp[a[i]] != i){
                mp[a[i]] = i;
            }else{
                if(mp[a[i]] < i){
                    mp[a[i]] = i;
                }
            }
        }

        for(auto it : mp){
            for(auto it2 : mp){
                if(it.first != it2.first){
                    if(__gcd(it.first, it2.first) == 1){
                        cout << it.second + 1 + it2.second + 1 << endl;
                        goto end;
                    }
                }
            }
        }

        end:
    }
}
