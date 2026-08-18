#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<vector<ll>> a(n, vector<ll>(n));
        vector<vector<ll>> b(n, vector<ll>(n));

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin >> a[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                b[i][j] = a[n-1-i][n-1-j];
            }
        }

        ll cnt = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(a[i][j] != b[i][j]) cnt++;
            }
        }

        ll req = cnt/2;
        if(k >= req && (k - req)%2 == 0 && n%2 == 0) cout << "YES" << endl;
        else if(k >= req && n%2 != 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
