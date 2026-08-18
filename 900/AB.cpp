// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        // ll ab_cnt = 0;
        // ll ba_cnt = 0;
        // for(int i = 0; i < s.length() - 1; i++){
        //     if(s[i] == 'a' && s[i+1] == 'b') ab_cnt++;
        //     if(s[i] == 'b' && s[i+1] == 'a') ba_cnt++;
        // }
        if(s[0] == s[s.length() - 1]) cout << s << endl;
        else{
            s[0] = s[s.length() - 1];
            cout << s << endl;
        }
        // return 0;
    }
}
