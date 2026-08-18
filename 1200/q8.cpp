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
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(n <= 3){
            cout << -1 << endl;
            continue;
        }

        ll i = 0, j = n-1;
        ll curMin = 1, curMax = n;
        ll s = -1, e = -1;
        while((s == -1 || e == -1)){
            if(i > j) break;

            if( (a[i] != curMin && a[i] != curMax) && (a[j] != curMin && a[j] != curMax) ){
                s = i+1;
                e = j+1;
                // break;
            }

            if(a[i] == curMin){
                curMin++;
                i++;
            }else if(a[i] == curMax){
                curMax--;
                i++;
            }
            // else{
            //     s = i+1;
            // }

            if(a[j] == curMin){
                curMin++;
                j--;
            }else if(a[j] == curMax){
                curMax--;
                j--;
            }
            // else{
            //     e = j+1;
            // }
        }

        if(s == -1 || e == -1){
            cout << -1 << endl;
        }else{
            cout << s << " " << e << endl;
        }
    }
}
