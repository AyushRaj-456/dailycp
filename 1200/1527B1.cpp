#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll o =0;
        for(int i=0; i<n; i++){
            if(s[i] == '0'){
                o++;
            }
        }

        if(o == 1 || (o%2 == 1)){
            cout << "BOB" << endl;
        }else{
            cout << "ALICE" << endl;
        }
    }
}
