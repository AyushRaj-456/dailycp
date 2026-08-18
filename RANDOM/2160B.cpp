#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n), req(n);

        int j =2;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i == 0) req[i] = 1;
            else{
                req[i] = req[i-1] + j;
                j++;
            }
        }
        
        // for(int i=0; i<n; i++){
        //     cout << req[i] << " ";
        // }cout << endl;

        int maxi = INT_MIN;
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            if(i == 0){
                ans[i] = 1;
                maxi = max(maxi, ans[i]);
            }
            else{
                int d = a[i] - a[i-1];
                if(d == req[i] - req[i-1]){
                    ans[i] = maxi + 1;
                    maxi = max(maxi, ans[i]);
                }else{
                    ans[i] = ans[i-d];
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        } cout << endl;
    }
}
