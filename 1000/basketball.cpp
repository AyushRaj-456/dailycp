// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,d;
        cin  >> n>>d;
        vector<ll> a(n);
        
        ll ans = 0, size = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>()); 
        for(int i=0; i<n; i++){
            if(d % a[i] == 0 || d < a[i]){
                ans++;
                size += 1;
            }else{
                ll temp = (d/a[i])+1;
                size += temp;
                if(size > n){
                    break;
                }else{
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}
