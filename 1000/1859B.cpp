#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        ll total = 0;
        vector<pair<ll, ll>> mini;
        cin >> n;
        ll temp_n = n;
        ll allSec = 0, minSec = INT_MAX, globalMin = INT_MAX; 
        while(n--){
            ll m, tmini = INT_MAX, tmini2 = INT_MAX;
            cin >> m;
            vector<ll> m1(m);

            for(int i=0; i<m; i++){
                cin >> m1[i];
                if(m1[i] < tmini){
                    tmini2 = tmini;
                    tmini = m1[i];
                }
                else if(m1[i] < tmini2) tmini2 = m1[i];
            }

            mini.push_back({tmini, tmini2});
            total += tmini;
        }

        if(temp_n != 1){
            sort(mini.begin(), mini.end());

            for(auto &p : mini){
                allSec += p.second;
                minSec = min(minSec, p.second);
                globalMin = min(globalMin, p.first);
            }
            // vector<pair<ll,ll>> diff_idx;
            // for(int i=0; i<temp_n; i++){
            //     diff_idx.push_back({mini[i].second - mini[i].first, i});
            // }
            // sort(diff_idx.begin(), diff_idx.end());

            total = allSec - minSec + globalMin;
            
        }

        cout << total << endl;
    }
}