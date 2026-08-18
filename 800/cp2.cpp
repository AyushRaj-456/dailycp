// Line trip

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        int start = 0;
        cin >> n >> x;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];

        }

        vector<int> v2;
        v2.push_back(v[0] - start);
        for(int i=1; i<n; i++){
            v2.push_back(v[i] - v[i-1]);
        }
        v2.push_back((x - v[n-1])*2);

        int maxVal = 0;
        for(int i=0; i<v2.size();i++){
            maxVal = max(maxVal, v2[i]);
        }
        cout << maxVal << endl;
    }
    return 0;
}