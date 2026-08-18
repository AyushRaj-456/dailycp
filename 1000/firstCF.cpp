// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // int t;
    // cin >> t;
    // while(t--){

    // }
    ll n,m,a;
    cin >> n >> m >> a;
    ll hor = ceil((double)n/a);
    ll ver = ceil((double)m/a);
    cout << hor*ver << endl;
}
