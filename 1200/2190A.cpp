#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        string s_s = s;
        sort(s_s.begin(), s_s.end());

        if(s == s_s){
            cout << "Bob" << endl;
            continue;
        }

        vector<int> idx;
        for(int i = 0; i < n; i++){
            if(s[i] != s_s[i]) idx.push_back(i + 1);
        }

        cout << "Alice" << endl;
        cout << idx.size() << endl;
        for(int x : idx) cout << x << " ";
        cout << "\n";
    }
}