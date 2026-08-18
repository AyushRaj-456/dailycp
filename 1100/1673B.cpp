#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        set<char> st;
        map<char,int> mp;

        for(int i=0; i<n; i++){
            st.insert(s[i]);
        }

        int unq = st.size();

        for(int i=0; i<unq; i++){
            mp[s[i]]++;
        }

        bool f = true;
        if(mp.size() != unq){
            cout << "NO" << endl;
            continue;
        }

        for(int i=1; i<=n-unq; i++){
            mp[s[i-1]]--;
            if(mp[s[i-1]] == 0){
                mp.erase(s[i-1]);
            }

            mp[s[i + unq - 1]]++;

            if(mp.size() != unq){
                f = false;
                break;
            }
        }

        if(f) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}
