// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll n){
    if(n == 0) return 1;
    return n * factorial(n-1);
}

ll ncr(ll n, ll r){
    return factorial(n) / (factorial(r) * factorial(n-r));
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll freq[2] = {0};
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == 0) freq[0]++;
            else if(a[i] == 1) freq[1]++;
        }
        // ll pairss = freq[0]*(freq[0]-1)/2;
        // ll ans = (freq[1]*freq[0]) + freq[1] + pairss
        ll ans = freq[1]*pow(2, freq[0]);
        cout << ans << endl;

    }
}
