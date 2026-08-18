#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // int t;
    // cin >> t;
    // while(t--){

    // }

    ll n;
    cin >> n;
    vector<ll> a(n);
    __int128 s = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        s += a[i];
    }

    ll days = 0;
    bool flag = true;

    while(s > 0){
        int oddCount = 0, oddIdx = -1;
        for(int i=0; i<n; i++){
            if(a[i] % 2 == 1){
                oddCount++;
                oddIdx = i;
            }
        }

        if(oddCount != 1){
            flag = false;
            break;
        }

        a[oddIdx]--;
        s = 0;
        for(int i=0; i<n; i++){
            a[i] /= 2;
            s += a[i];
        }

        days++;
    }

    if(flag == false){
        cout << -1 << endl;
    }else{
        cout << days << endl;
    }

}