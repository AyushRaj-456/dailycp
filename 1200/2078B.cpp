#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;

        vll ans(n);
        if(k % 2 == 1){
            for(int i=0; i<n-1; i++) ans[i] = n;
            ans[n-1] = n-1;
        } else {
            for(int i=0; i<n-2; i++) ans[i] = n-1;
            ans[n-2] = n;
            ans[n-1] = n-1;
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}