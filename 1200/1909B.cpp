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
        set<ll> diff;
        ll eve = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) eve++;
        }

        if(n == 2){
            sort(a.begin(), a.end());
            cout << a[1] + 1 << endl;
            continue;
        }else if(eve > 0 && eve < n){
            cout << 2 << endl;
            continue;
        }

        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         if(i != j){
        //             diff.insert(abs(a[i] - a[j]));
        //         }
        //     }
        // }

        ll ans = 0;
        for(int i=1; i<=60; i++){
            ll v = pow(2,i);
            // ll v = (ll)round(pow(2, i));
            set<ll> st;
            for(int j=0; j<n; j++){
                st.insert(a[j] % v);
            }

            if(st.size() == 2){
                ans = v;
                break;
            }
        }

        if(ans == 0){
            sort(a.begin(), a.end());
            ans = a[n-1]+1;
        }
        cout << ans << endl;
    }
}
