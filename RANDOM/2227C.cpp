#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        vector<int> a(n), div6, div3, div2, oth;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] % 6 == 0) div6.push_back(a[i]);
            else if(a[i] % 3 == 0) div3.push_back(a[i]);
            else if(a[i] % 2 == 0) div2.push_back(a[i]);
            else oth.push_back(a[i]);
        }

        vector<int> interleaved;
        int i3 = 0, io = 0, i2 = 0;
        while(io < (int)oth.size()){
            if(i3 < (int)div3.size()) interleaved.push_back(div3[i3++]);
            interleaved.push_back(oth[io++]);
            if(i2 < (int)div2.size()) interleaved.push_back(div2[i2++]);
        }

        // Step 3: oth exhausted — these are the leftover div3/div2 elements
        vector<int> leftovers;
        while(i3 < (int)div3.size()) leftovers.push_back(div3[i3++]);
        while(i2 < (int)div2.size()) leftovers.push_back(div2[i2++]);

        // Step 4: assemble final answer -> div6, then leftovers, then interleaved
        vector<int> ans;
        for(int x : div6) ans.push_back(x);
        for(int x : leftovers) ans.push_back(x);
        for(int x : interleaved) ans.push_back(x);

        for(int i = 0; i < (int)ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}