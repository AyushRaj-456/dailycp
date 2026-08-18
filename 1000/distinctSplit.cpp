// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        vector<ll> preff(n), suffx(n);
        map<char,int> mp, mp2;

        for(int i = 0; i < n; i++){
            mp[s[i]]++;
            preff[i] = mp.size();
        }

        for(int i = n-1; i >= 0; i--){
            mp2[s[i]]++;
            suffx[i] = mp2.size();
        }

        ll ans = 0;

        for(int i = 0; i < n-1; i++){
            ans = max(ans, preff[i] + suffx[i+1]);
        }

        cout << ans << endl;
    }
}