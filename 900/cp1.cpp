#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        
        int xk, yk;
        cin >> xk >> yk;

        int xq, yq;
        cin >> xq >> yq;

        vector<pair<int, int>> add = {{a,b}, {a,-b}, {-a,b}, {-a,-b},
                                        {b,a}, {b,-a}, {-b,a}, {-b,-a}};
        
        set<pair<int, int>> set1, set2;

        for(auto d:add){
            int x = xk + d.first;
            int y = yk + d.second;
            set1.insert({x,y});

            x = xq+ d.first;
            y = yq + d.second;
            set2.insert({x,y});
        }

        int ans = 0;
        for(auto i:set1){
            if(set2.find(i) != set2.end()) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}