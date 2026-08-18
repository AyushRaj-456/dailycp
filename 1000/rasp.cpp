// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        ll by2 = 0, byk = 0;

        vector<ll> a(n);
        vector<ll> rem(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            
            if(a[i] % 2 == 0) by2++;
            if(a[i] % k == 0) byk++;

            rem[i] = k - (a[i] % k);
        }

        if(byk >= 1){
            cout << 0 << endl;
            continue;
        }
        
        ll mini2 = INT_MAX;
        if(k == 4){
            mini2 = max((ll)0, 2 - by2);
        }
        
        ll mini = INT_MAX;
        for(int i=0; i<n; i++){
            mini = min(mini, rem[i]);
        }
        
        if(k == 4) cout << min(mini, mini2) << endl;
        else cout << mini << endl; 
    }
}
