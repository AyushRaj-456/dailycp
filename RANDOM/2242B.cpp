#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll debt = 0;
        ll part = 1;
        vector<bool> valid(3, false);
        for(int i=0; i<n; i++){
            if(a[i] <= part){
                debt--;

                if(debt == 0){
                    valid[part-1] = true;
                    part++;
                }
            }else{
                debt++;
                if(debt == 0){
                    valid[part-1] = true;
                    part++;
                }
            }
        }

        if(valid[0] && valid[1] && valid[2]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
