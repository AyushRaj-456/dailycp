#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        ll tSum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            tSum += a[i];
        }

        ll lastRev = 0;
        for(int i=0; i<n; i++){
            if(i==0){
                ll how_much = (n - i +1);
                ll mult_by = a[i] - lastRev;
                lastRev += a[i];

                tSum -= how_much*mult_by;
            }
            else{
                ll mult_by = a[i] - lastRev;
                lastRev += a[i];

                tSum -= mult_by;
            }
        }

        if(tSum == k)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
