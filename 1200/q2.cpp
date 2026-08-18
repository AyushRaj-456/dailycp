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
        bool ev = false, od = false;

        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) ev = true;
            else od = true;
        }

        if(ev == true && od == true) cout << 2 << endl;
        else if(ev == false && od == true) cout << 4 << endl;
        else  if(ev == true && od == false) cout << 3 << endl;
        
        // ll ans = 0;
        // if(ev == true && od == true) ans = 2;
        // else if(ev == false && od == true) ans = 4;
        // else  if(ev == true q3.cpp
        // && od == false) ans = 3;

        // for(int i=0; i<n; i++){
        //     cout << a[i] % ans << " ";
        // }cout << endl;
    }
}
