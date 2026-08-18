// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll sumi(ll n){
    if(n%2 == 0) return n/2;
    else return -1*(n+1)/2;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll l,r;
        cin >> l >> r;

        ll ans = sumi(r) - sumi(l-1);
        cout << ans << endl;


        // if(l == r)
        //     if( l % 2 == 0) cout << l << endl;
        //     else cout << l*(-1) << endl;
        // else if(l % 2 != 0 && r % 2 != 0){
        //     cout << (r-l)/2 + r*(-1) << endl;
        // }else if(l % 2 == 0 && r % 2 == 0){
        //     cout << (r-l)/2 + r << endl;
        // }else if(l % 2 == 0 && r % 2 != 0){
        //     cout << (-1)*((r-l)/2 + 1) << endl;
        // }else if(l % 2 != 0 && r % 2 == 0){
        //     cout << ((r-l)/2 + 1) << endl;
        // }
    }
}
