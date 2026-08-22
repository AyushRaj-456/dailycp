#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    ll n,q;
    cin >> n >> q;

    vll a(n);

    ll s = 0;

    for(int i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
    }

    map<ll,ll> mp;

    vll ans;

    ll last = 0;
    bool type2 = false;

    while(q--){
        ll q1;
        cin >> q1;

        if(q1 == 1){
            ll q2,q3;
            cin >> q2 >> q3;

            if(mp.find(q2) != mp.end()){
                s = s - mp[q2] + q3;
            }
            else{
                if(type2){
                    s = s - last + q3;
                }
                else{
                    s = s - a[q2-1] + q3;
                }
            }

            mp[q2] = q3;

            ans.push_back(s);
        }
        else{
            ll q2;
            cin >> q2;

            s = n * q2;

            last = q2;
            type2 = true;

            mp.clear();

            ans.push_back(s);
        }
    }

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}