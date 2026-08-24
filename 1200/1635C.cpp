#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
bool isNonDecreasing(vector<ll> &a){
    for(int i = 1; i < (int)a.size(); i++){
        if(a[i] < a[i-1]) return false;
    }
    return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vll a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        if(isNonDecreasing(a)){
            cout << 0 << endl;
            continue;
        }

        ll sufMax = -1e18, sufMaxIdx = -1;
        array<ll,4> best = {0, 0, -1, -1};
        ll bestSpread = -1;
        vector<array<ll,4>> vp(n+1);
        vp[n] = {0, 0, -1, -1};

        for(int i = n-1; i >= 0; i--){
            vp[i] = best;
            
            if(sufMaxIdx != -1 && sufMax - a[i] > bestSpread){
                bestSpread = sufMax - a[i];
                best = {a[i], sufMax, (ll)i, sufMaxIdx};
            }

            if(a[i] >= sufMax){ sufMax = a[i]; sufMaxIdx = i;}
        }

        vector<vector<ll>> fa;
        ll ops = 0;
        for(int i=0; i<n-2; i++){
            vector<ll> d;
            ll tmin = vp[i][0], tmax = vp[i][1];
            ll tminIdx = vp[i][2], tmaxIdx = vp[i][3];

            if(tmaxIdx != -1 && tmin - tmax < a[i]){
                ops++;
                d.push_back(i+1);
                d.push_back(tminIdx+1);
                d.push_back(tmaxIdx+1);
                a[i] = tmin-tmax;
            }
            fa.push_back(d);
        }
        if(isNonDecreasing(a)){
            cout << ops << endl;
            for(int i=0; i<fa.size(); i++){
                if(fa[i].empty()) continue;
                for(int j=0; j<fa[i].size(); j++){
                    cout << fa[i][j] << " ";
                }
                cout << endl;
            }
        }else{
            cout << -1 << endl;
        }
    }
}