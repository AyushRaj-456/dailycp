#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

// void fun(string s, set<string>& st){

//     if(s.size() == 0) return;
//     if(st.count(s)) return;

//     st.insert(s);
//     string s1 = s, s2 = s;
//     s1.erase(0, 1);
//     if(s2.size() >= 2) s2.erase(1, 1);
//     else s2.erase(0, 1);

//     fun(s1, st);
//     fun(s2, st);
// }

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        set<int> st;
        ll ans = 0;
        for(int i=0; i<n; i++){
            st.insert(s[i] - 'a' + 1);
            ans += st.size();
        }

        // for(auto it : st){
        //     ans += it;
        // }
        cout << ans << endl;
    }
}