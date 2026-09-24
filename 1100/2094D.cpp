#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        string p,s;
        cin >> p >> s;

        // vll vp, vs;
        vector<pair<char,int>> vp, vs;
        ll cnt = 1;
        for(int i=1; i<p.size(); i++){
            if(p[i] == p[i-1]) cnt++;
            else{
                vp.push_back({p[i-1], cnt});
                cnt = 1;
            }
        }
        vp.push_back({p[p.size()-1], cnt});

        cnt = 1;
        for(int i=1; i<s.size(); i++){
            if(s[i] == s[i-1]) cnt++;
            else{
                vs.push_back({s[i-1], cnt});
                cnt = 1;
            }
        }
        vs.push_back({s[s.size()-1], cnt});

        if(vp.size() != vs.size()){
            cout << "NO\n";
            continue;
        }

        bool val = true;
        for(int i=0; i<vp.size(); i++){
            if(vs[i].second > 2*vp[i].second || 
                vs[i].second < vp[i].second || 
                vs[i].first != vp[i].first)
            {
                cout << "NO" << endl;
                val = false;
                break;
            }
        }

        if(val) cout << "YES" << endl;
    }
}
 