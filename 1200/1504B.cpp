#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        string a,b;
        cin >> a >> b;

        vector<pair<ll,ll>> vp(n);
        vector<bool> vb(n);
        vector<pair<bool,ll>> vp2(n);
        
        ll cnt0 = 0, cnt1 = 0;

        for(int i=0; i<n; i++){
            // if(a[i] == b[i]) vp2[i] = {true, 0};
            // else vp2[i] = {false, 0};

            if(a[i] == b[i]) vb[i] = true;
            else vb[i] = false;
             
            // if(a[i] == '1') cnt1++;
            // else cnt0++;

            // vp[i] = {cnt0, cnt1};
        }

        ll cnt = 0;
        map<ll, vector<ll>> res; 

        for(int i=n-1; i>=0; i--){
            if(i == n-1){
                if(vb[i] == false) cnt = 1;   
                else cnt = 2;                 
                res[vb[i]].push_back(cnt);
            }
            else if(vb[i] != vb[i+1]){
                cnt++;                   
                res[vb[i]].push_back(cnt);
            }
        }

        // ll cnt = 0;
        // for(int i=n-1; i>=0; i--){
        //     if(vp[i].first == vp[i].second){
        //         cnt++;
        //         vp2[i].second = cnt;
        //     }else{
        //         vp2[i].second = cnt;
        //     }
        // }

        // for(auto it : vp2){
        //     cout << it.first << " " << it.second << endl;
        // }

        // bool val = true;
        // for(int i=0; i<n; i++){
        //     if(vp2[i].first == true && vp2[i].second % 2 == 1){
        //         val = false;
        //         break;
        //     }else if(vp2[i].first == false && vp2[i].second % 2 == 0){
        //         val = false;
        //         break;
        //     }
        // }

        ll valid = 1;
        for(auto it : res){
            if(it.first == 1){
                for(auto jt : it.second){
                    if(jt % 2 == 1){
                        valid = 0; break;
                    }
                }
            }else{
                for(auto jt : it.second){
                    if(jt % 2 == 0){
                        valid = 0; break;
                    }
                }
            }
        }

        if(valid == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}