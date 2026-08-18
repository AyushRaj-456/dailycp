// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm (ll a, ll b){
    return (a*b)/__gcd(a,b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        ll a = 1;
        ll d = 2;
        while(d*d <= n){
            if(n % d == 0){
                a = n/d;
                break;
            }
            d++;
        }
        
        cout << a << " " << n-a << endl;
    }
}
