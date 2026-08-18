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
        ll o = 0, greaterThan1 = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == 1) o++;
            if(a[i] > 1) greaterThan1++;
        }

        if(o < 2){
            if(greaterThan1 >= 1){ cout << "NO" << endl; continue; }
        }
        
        sort(a.begin(), a.end());
        ll maxSum = 1;
        bool ans = true;
        for(int i=1; i<n; i++){
            if(a[i] <= maxSum) maxSum += a[i];
            else{
                ans = false;
                break;
            }
        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}