#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    // int t;
    // cin >> t;
    // while(t--){
        ll n,k,x;
        cin >> n >> k >> x;

        vll a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vll d;
        for(int i=1; i<n; i++){
            if(a[i] - a[i-1] > x){
                d.push_back(a[i] - a[i-1]);
            }
        }

        ll ds = d.size();
        sort(d.begin(), d.end());
        
        for(int i=1; i<d.size(); i++){
            ll need = (d[i] - 1) / x;
            if(need <= k){
                k -= need;
                ds--;
            }else{
                break;
            }
        }
        cout << ds + 1 << endl;
    }
// }