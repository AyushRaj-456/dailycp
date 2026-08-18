#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        string ss = s + s;
        int sze = ss.size();

        ll maxi = INT_MIN;
        int j = 0;

        for(int i = 0; i < sze; i++){
            if(ss[i] != c) continue;
            if(j < i) j = i;

            while(j < sze && ss[j] != 'g') j++;
            if(j < sze) maxi = max(maxi, (ll)(j - i));
        }

        cout << maxi << endl;
    }
}