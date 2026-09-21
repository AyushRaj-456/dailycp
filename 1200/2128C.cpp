#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        
        vll a(n), m(n);
        m[0] = 0;

        ll mini= LLONG_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mini = min(mini,a[i]);
            if(i > 0){
                m[i] = mini;
            }
        }

        bool f = 1;
        for(int i=1; i<n; i++){
            ll h1 = 0, h2 = 0;
            
            if(a[i] % 2 == 0){
                h1 = (a[i] / 2) - 1;
                h2 = (a[i] / 2) + 1;
            }else{
                h1 = (a[i] / 2);
                h2 = (a[i] / 2) + 1;
            }

            if(m[i] < h1){
                f = 0;
                break;
            }
        }
        if(f) cout << "YES\n";
        else cout << "NO\n";
    }
}
