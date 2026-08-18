#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int a,b,c,d;
        cin >> a >> b >> c >> d;
        if(d < b){
            cout << -1 << endl;
            continue;
        }
        long long int d_travel = d-b;
        if( c - (d_travel + a) <= 0) cout << (d_travel) + abs(c - (a + d_travel)) << endl;
        else cout << -1 << endl;
    }
}