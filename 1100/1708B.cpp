#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,l,r;
        cin >> n >> l >> r;

        vector<ll> a(n);
        bool ans = true;
        for(int i=0; i<n; i++){
            int rem = l % (i+1);
            if(rem == 0) a[i] = l;
            else a[i] = l + (i+1 - rem);
            
            if(a[i] > r){
                ans = false;
                break;
            }
        }

        if(ans){
            cout << "YES" << endl;
            for(int i=0; i<n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
