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

        vll a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        ll ans = 1;
        for(int i=1; i<n; i++){
            if(a[i] != a[i-1]) ans++;
        }

        
        // case 1 : aabb
        // case 2 : aabc
        // case 3 : ...aab
        ll xtra = 0;
        for(int i=0;i<2; i++){
            
            for(int j=0; j<n-3; j++){
                
                if(a[j] == a[j+1] && a[j+2] == a[j+3] && a[j] != a[j+2]){
                    xtra = max(xtra,(ll)2);
                }
                if(a[j] == a[j+1] && a[j+1] != a[j+3] && a[j] != a[j+3]){
                    xtra = max(xtra,(ll)1); 
                }
            }

            if(n >= 3 && a[n-1] != a[n-2] && a[n-2] == a[n-3]) xtra = max(xtra,(ll)1);
            // ans += xtra;
            reverse(a.begin(), a.end());
        }


        cout << ans+xtra << endl;
    }
}
