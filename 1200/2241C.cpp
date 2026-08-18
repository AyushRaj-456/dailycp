#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string a;
        cin >> a;

        vector<char> b;
        char curr = a[0];
        for(int i=1; i<n; i++){
            if(a[i] == curr){
                continue;
            }else{
                b.push_back(curr);
                curr = a[i];
            }
        }

        b.push_back(curr);

        ll cnt1 = 0, cnt0 = 0;
        for(int i=0; i<b.size(); i++){
            if(b[i] == '0') cnt0++;
            else cnt1++;
        }

        if(cnt0 == cnt1 && b.size() == 2){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
    }
}
