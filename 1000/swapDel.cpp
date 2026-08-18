// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        ll ones = 0, zero = 0;
        cin >> s;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1') ones++;
            else zero++;
        }
        if(ones == zero){
            cout << 0 << endl;
            continue;
        }
        // ll swaps = min(ones, zero);
        // cout << s.size()- 2*swaps << endl;
        ll k =0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '1') zero--;
            else ones--;
            
            if(ones < 0 || zero < 0){
                break;
            }
            k++;

        }
        cout << s.size() - k << endl;
    }
}
