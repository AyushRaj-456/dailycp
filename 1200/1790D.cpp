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
        map<int,int> mp;
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        sort(a.begin(), a.end());

        vector<pair<int,int>> p;
        for(auto &entry : mp){
            p.push_back({entry.first, entry.second});
        }

        sort(p.begin(), p.end(), greater<pair<int,int>>());

        int cnt = p[0].second;
        for(int i=0; i<p.size(); i++){
            int u = p[i].first;
            int v = p[i].second;
            int w,z;
            if(i > 0){
                w = p[i-1].first;
                z = p[i-1].second;
                if(u - 1 != w){
                    if(z < v) cnt += z; 
                }
            }else{
                // cnt += v;
                if(z > v) cnt += z-v;
            }
        }

        cout << "ans = " << cnt << endl;
    }
}
