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
        for(int i=0; i<n; i++) cin >> a[i];

        int i = 0, j = n-1, ans = 0;
        int iSum = 0, jSum = 0;
        while(i < j){
            if(iSum == jSum && i == 0 && j == n-1){
                ans = 0;
            }
            else if(iSum == jSum){
                int tt = (i+1) + (n-j);
                ans = max(ans,tt);
                j--;
            }

            if(iSum < jSum) i++;
            else j--;
        }

        cout << ans << endl;
    }
}
