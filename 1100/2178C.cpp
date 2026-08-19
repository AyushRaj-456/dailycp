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

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        vll suff(n), pref(n);
        for(int i=n-1; i>=0; i--){
            if(i==n-1) suff[i] = 0;
            else suff[i] = suff[i+1] + (-1*a[i+1]);
        }

        for(int i=0; i<n; i++){
            if(i==0) pref[i] = 0;
            else if(i==1) pref[i] = a[i-1];
            else pref[i] = pref[i-1] + abs(a[i-1]);
        }

        ll maxi = -1e18;
        for(int i=0; i<n; i++){
            // cout << suff[i] << " ";
            maxi = max(maxi, suff[i] + pref[i]);
        }
        

        // for(int i=0; i<n; i++){
        //     cout << pref[i] << " ";
        //     // maxi = max(maxi, suff[i] + pref[i]);
        // }

        cout << maxi << endl;

    }
}
