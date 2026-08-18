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

        vll a(n);
        ll mini = INT_MAX;
        ll maxi = INT_MIN;
        for(int i=0; i<n; i++){
            cin >> a[i];
            maxi = max(maxi, a[i]);
            mini = min(mini, a[i]);
        }

        ll maxCnt = 0;
        for(int i=0; i<n; i++) if(a[i] == maxi) maxCnt++;

        if(maxi - mini > k+1){
            cout << "Jerry" << endl;
            continue;
        }else if(maxCnt > 1 && maxi - mini > k){
            cout << "Jerry" << endl;
            continue;
        }

        ll validMove = 0;
        for(int i=0; i<n; i++){
            ll perMove = abs(a[i] - mini);
            validMove += perMove;
            a[i] -= perMove;
            validMove += a[i];
        }

        if(validMove % 2 == 0) cout << "Jerry" << endl;
        else cout << "Tom" << endl;

    }
}
