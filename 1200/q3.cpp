#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long

ll lcm(ll a, ll b) {
    return a / __gcd(a, b) * b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;
        // vector<ll> ans(n,0);

        ll pos = 0, nev = 0;
        ll h = n, l = 1;
        ll i =x;

        ll xy = lcm(x,y);

        while(i <= n){
            if(i % x == 0 && i%xy != 0){
                pos += h;
                h--;
            }
            i += x;
        }
        i = y;
        while(i <= n){
            if((i) % y == 0 && (i%xy != 0)){
                nev += l;
                l++;
            }
            i += y;
        }

        cout << pos - nev << endl;
    }
}
