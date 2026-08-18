// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        int d1 = c-b;
        int d2 = c-a;
        int d3 = b-a;

        bool ok = false;

        ll temp_a = 2*b - c;
        if(temp_a > 0 && temp_a % a == 0) ok = true;

        if((a + c) % 2 == 0){
            ll temp_b = (a + c) / 2;
            if(temp_b > 0 && temp_b % b == 0) ok = true;
        }

        ll temp_c = 2*b - a;
        if(temp_c > 0 && temp_c % c == 0) ok = true;

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
