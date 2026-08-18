#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n), b(q);

        ll maxi = INT_MIN;
        for(int i=0; i<n; i++){
            cin >> a[i];
            maxi = max(maxi, a[i]);
        } 
        
        for(int i=0; i<q; i++){
            cin >> b[i];
        }

        vector<ll> pow2(30);
        for(int i=0; i<=30; i++){
            if(i==0) pow2[i] = 1;
            else {
                pow2[i] = pow2[i-1]*2;
            }
        }

        int prev = 31;
        for(int i=0; i<q;i++){
            if(b[i] >= prev) continue;

            for(int j=0; j<n; j++){
                if(a[j] % pow2[b[i]] == 0){
                    a[j] += pow2[b[i] - 1];
                    // maxi = max(maxi, a[j]);
                }
            }
            prev = b[i];
        }

        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }cout << endl;
    }
}