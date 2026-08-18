#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n), diff(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        // for(int i=0; i<n; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;


        ll count = 0, max_count = 0;
        for(int i=0; i<n-1; i++){
            if(a[i+1] - a[i] <= k){
                count++;
            }else{
                if(max_count <= count) max_count = count;
                count = 0;
            }
        }
        if(max_count <= count) max_count = count;

        cout << n - (max_count+1) << endl;
    }
}