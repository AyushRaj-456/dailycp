#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<pair<ll,ll>> a(n), b(n), c(n);

        for(int i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i;
        }

        for(int i=0; i<n; i++){
            cin >> b[i].first;
            b[i].second = i;
        }

        for(int i=0; i<n; i++){
            cin >> c[i].first;
            c[i].second = i;
        }

        sort(a.begin(), a.end(), greater<pair<ll,ll>>());
        sort(b.begin(), b.end(), greater<pair<ll,ll>>());
        sort(c.begin(), c.end(), greater<pair<ll,ll>>());
        
        ll maxi = LLONG_MIN, cur = 0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                for(int k=0; k<3; k++){
                    if(a[i].second != b[j].second && b[j].second != c[k].second && a[i].second != c[k].second){
                        cur = a[i].first + b[j].first + c[k].first;
                    }
                    maxi = max(maxi, cur);
                }
            }
        }
        cout << maxi << endl;
    }
}
