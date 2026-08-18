#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x, cnt = 0;
        cin >> n >> x;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll inside = 0, top = a[n-1];
        vector<ll> hh(n);
        for(int i=0; i<n; i++){
            inside += (top-a[i]);
            hh[i] = (top-a[i]);
        }

        if(x <= inside){
            if(x == inside){
                cout << top << endl;
                continue;
            }

            sort(hh.begin(), hh.end());
            ll done = 0;
            ll diff = inside - x;
            for(int i=0; i<diff; i++){
                if(hh[i] - done <= 0) continue;
                else{
                    if(hh[i] - done > 0){
                        done++;
                        cnt++;
                        ll to_dec = (n - i);
                        inside -= to_dec;
                    }
                }

                if(inside <= x) break;
            }//loop close

            cout << (top - cnt) << endl; 
        }else{
            ll rem = x - inside;
            ll xtra_h = rem/n;
            cout << (top + xtra_h) << endl; 
        }
    }
}