// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, ans = 0;
        cin >> n;
        ll arr[n];
        ll max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN, max4 = INT_MIN;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        if(n == 1){
            cout << 0 << endl;
            continue;
        }

        max1 = arr[n-1] - arr[0];
        for(int i=1; i<n; i++) max2 = max(max2, arr[i-1] - arr[i]);

        ll preMin =  INT_MAX;
        for(int i=0; i<n-1; i++) preMin = min(preMin, arr[i]);
        max3 = arr[n-1] - preMin;
        
        ll postMax =  INT_MIN;
        for(int i=1; i<n; i++) postMax = max(postMax, arr[i]);
        max4 = postMax - arr[0];

        ans = max({max1, max2, max3, max4});
        cout << ans << endl;
    }
}
