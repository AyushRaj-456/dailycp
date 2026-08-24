#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        vll a;
        for(int i = 0; i < n; i++){
            if(s[i] != c) a.push_back(i + 1);
        }

        ll ss = a.size();

        if(ss == 0){
            cout << 0 << endl;
        }else{
            bool found;
            for(int i=2; i<=n; i++){
                found = true;
                for(int j=i; j<=n; j+=i){
                    if(s[j-1] != c){ found = false; break;}
                }

                if(found){
                    cout << 1 << endl;
                    cout << i << endl;
                    break;
                }
            }
            
            if(!found){
                cout << 2 << endl;
                cout << n << " " << n-1 << endl;
            }
        }
    }
}