#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int p[n];
        pair<int,int> pi[n];

        for(int i=0; i<n; i++){
            cin >> p[i];
            pi[i] = {p[i], i};
        }

        sort(pi, pi + n, greater<pair<int,int>>());

        int mid_val_idx;
        int mini_idx, maxi_idx;
        bool ans  = false;

        for(int i=0; i<n; i++){
            int mini = INT_MAX, maxi = INT_MAX;
            mini_idx = -1;
            maxi_idx = -1;


            for(int j=0; j<pi[i].second; j++){
                int prev = mini;
                mini = min(mini, p[j]);
                if(mini != prev) mini_idx = j;
            }

            for(int j=pi[i].second+1; j<n; j++){
                int prev = maxi;
                maxi = min(maxi, p[j]);
                if(maxi != prev) maxi_idx = j;
            }

            if(mini < pi[i].first && maxi < pi[i].first &&
               mini_idx != -1 && maxi_idx != -1){
                mid_val_idx = pi[i].second;
                ans = true;
                break;
            }
        }

        if(ans){
            cout << "YES" << endl;
            cout << mini_idx + 1 << " " << mid_val_idx + 1 << " " << maxi_idx + 1 << endl;
        }
        else cout << "NO" << endl;
    }
}