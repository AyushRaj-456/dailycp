#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vll a(n);

        ll s = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            s += a[i];
        }

        vll ans;
        bool type2 = false;
        while(q--){
            ll q1;
            cin >> q1;
            
            ll last = 0;

            if(q1 == 1){
                // take 2
                ll q2, q3;
                cin >> q2 >> q3;
                if(type2 = false) s = s - a[q2] + q3;
                else s = s - last + q3;

                ans.push_back(s);
            }else{
                // take 1
                ll q2;
                cin >> q2;  
                s = n*q2;

                ans.push_back(s);
                last = q2;
            }
        }

        for(int i=0; i<q; i++){
            cout << ans[i] << endl;
        }
    }
}
