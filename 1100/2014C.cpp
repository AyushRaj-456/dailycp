#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        ll s=  0;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            s += a[i];
        }

        sort(a.begin(), a.end());

        ll tt = a[n/2]*2;
        ll x = (tt*n)/s;
        cout << x+1 << endl;
    }
}
