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
        vector<ll>  mism, a1,a2;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<n/2; i++){
            if(a[i] != a[n-i-1]){
                mism.push_back(a[i]);
                mism.push_back(a[n-i-1]);
            }
        }

        for(int i=0; i<n; i++){
            if(a[i] != mism[0]) a1.push_back(a[i]);
            if(a[i] != mism[1]) a2.push_back(a[i]);
        }

        vector<ll> reva1, reva2;
        reva1 = a1;
        reva2 = a2;
        reverse(reva1.begin(), reva1.end());
        reverse(reva2.begin(), reva2.end());

        if(reva1 == a1) cout << "YES" << endl;
        else if(reva2 == a2) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
