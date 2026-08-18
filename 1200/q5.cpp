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

        ll monotonic = 0;
        for(int i=0; i<n-3; i++){
            if(a[i] <= a[i+1] && a[i-1] <= a[i+2]) monotonic++;
            else if(a[i] >= a[i+1] && a[i-1] >= a[i+2]) monotonic++;
        }

        return (a.size() - monotonic);

    }
}
