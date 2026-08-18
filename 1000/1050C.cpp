// common part

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
        vector<ll> odd , even;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] % 2 == 0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }

        sort(odd.begin(), odd.end());
        sort(even.begin(), even.end());
        ll even_sum = 0;

        for(int i=0; i<even.size(); i++) even_sum += even[i];

        ll os = odd.size();
        if(os == 0) cout << 0 << endl;
        else if(os % 2 == 0){
            ll odd_sum = 0;
            for(int i=os-1; i>= os/2; i--) odd_sum += odd[i];
            cout << even_sum + odd_sum << endl;
        }else if(os % 2 == 1){
            ll odd_sum = 0;
            for(int i=os-1; i>= os/2; i--) odd_sum += odd[i];
            cout << even_sum + odd_sum << endl;
        }

    }
}
