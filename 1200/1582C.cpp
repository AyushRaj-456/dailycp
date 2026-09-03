#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

// int fun(int i, int j, string& s, string& r, vector<vector<ll>>& dp){

//     if(i > s.size() || j > r.size()) return 0;
//     if(dp[i][j] != -1) return dp[i][j];

//     if(s[i] == r[j]){
//         return dp[i][j] = 1 + fun(i+1, j+1, s, r, dp);
//     }

//     int m1 = fun(i, j+1, s, r, dp);
//     int m2 = fun(i+1, j, s, r, dp);
//     return dp[i][j] = max(m1,m2);
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        string r = s;
        reverse(r.begin(), r.end());
        
        if(s == r){
            cout << 0 << endl;
            continue;
        }
        
        
        vector<vector<ll>> dp(n+1, vll(n+1,0));
        map<char, int> mp;

        for(int i=0; i<n; i++) mp[s[i]]++;

        // int lcps = fun(0,0,s,r,dp);
        
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(s[i] == r[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }else{
                    int m1 = dp[i][j+1];
                    int m2 = dp[i+1][j];
                    dp[i][j] = max(m1,m2);
                }
            }
        }

        char c1,c2;
        for(int i=0; i<n; i++){
            if(s[i] != r[i]) c1 = s[i]; c2 = r[i];
        }

        reverse(r.begin(), r.end());
        ll ans = 0;
        for(int i=0; i < r.size(); ){
            if(r[i] == c2){
                r.erase(r.begin() + i);
                ans++;
            }else{
                i++;
            }
        }

        string temp = r;
        reverse(temp.begin(), temp.end());
        if(r == temp){
            cout << ans << endl;
            continue;
        }

        r = s;
        ans = 0;
        for(int i=0; i < r.size(); ){
            if(r[i] == c2){
                r.erase(r.begin() + i);
                ans++;
            }else{
                i++;
            }
        }

        temp = r;
        reverse(temp.begin(), temp.end());
        if(r == temp){
            cout << ans << endl;
            continue;
        }

        cout << - 1 << endl; 
    }
}
