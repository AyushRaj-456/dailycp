#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        ll prev = a[0];
        ll sum = 0;
        if(a[0] >= 0) sum = a[0];
        ll maxi = sum;
        for(int i=1; i<n; i++){
            if((a[i] % 2 == 0) != (prev%2 == 0)){
                sum += a[i];
            }else{
                sum = a[i];
            }

            prev  = a[i];
            maxi = max(maxi,sum);
            if(sum < 0) sum = 0;
        }

        cout << maxi << endl;
    }
}
