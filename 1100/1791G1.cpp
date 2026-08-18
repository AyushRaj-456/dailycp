#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,c;
        cin >> n >> c;
        vector<ll> a(n);
        vector<pair<ll,ll>> b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
            b[i] = {a[i], i+1};
        }
        
        vector<ll> tt1, tt2, tt3;


        ll s1 = 0, cnt1 = 0;
        for(int i=0; i<n; i++){
            tt1.push_back(b[i].first + b[i].second);
        }

        sort(tt1.begin(), tt1.end());
        for(int i=0; i<n; i++){
            s1 += tt1[i];
            if(s1 <= c) cnt1++;
            else break;
        }

        reverse(b.begin(), b.end());

        ll s2 = 0, cnt2 = 0;
        for(int i=0; i<n; i++){
            tt2.push_back(b[i].first + b[i].second);
        }

        sort(tt2.begin(), tt2.end());
        for(int i=0; i<n; i++){
            s2 += tt2[i];
            if(s2 <= c) cnt2++;
            else break;
        }

        sort(b.begin(), b.end());

        ll s3 = 0, cnt3 = 0;
        for(int i=0; i<n; i++){
            tt3.push_back( (b[i].first + b[i].second));
        }

        sort(tt3.begin(), tt3.end());
        for(int i=0; i<n; i++){
            s3 += tt3[i];
            if(s3 <= c) cnt3++;
            else break;
        }

        cout << max({cnt1, cnt2, cnt3}) << endl;
    }
}
