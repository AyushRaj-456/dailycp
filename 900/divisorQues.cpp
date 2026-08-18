// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        ll ans = 0;
        for(ll i=1; ;i++){
            if(n%i != 0) break;
            else ans++;
        }
        cout << ans << endl;
        
    }
}
