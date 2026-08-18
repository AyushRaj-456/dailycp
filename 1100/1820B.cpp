#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, o = 0, z = 0;
        // vector<ll> a(n);
        string a;
        cin >> a;
        n = a.size();
        for(int i=0; i<n; i++){
            // cin >> a[i];
            if(a[i] == '1') o++;
            else z++;
        }
        
        if(o == n){
            cout << n << endl;
            continue;
        }else if(z == n){
            cout << 0 << endl;
            continue;
        }

        ll from_left = 0, from_ryt = 0, midd = 0;

        for(int i=0; i<n; i++){
            if(a[i] == '0') break;
            else from_left++;
        }

        for(int i=n-1; i>=0; i--){
            if(a[i] == '0') break;
            else from_ryt++;
        }

        ll cur = 0;
        for(int i=0; i<n; i++){
            if(a[i] == '1') cur++;
            else{
                if(midd < cur){ 
                    midd = cur;
                    // cur = 0;
                }
                cur = 0;
            }
        }

        ll f_len = 0;
        if(from_left + from_ryt > midd) f_len = from_left + from_ryt;
        else f_len = midd;

        ll h = 1, f_area = 0;
        while(f_len > 0){
            ll area = f_len*h;
            if(area > f_area) f_area = area;
            h++;
            f_len--;
        }
        cout << f_area << endl;
    }
}
