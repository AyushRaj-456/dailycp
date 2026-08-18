#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        map<int, int> mp;
        cin >> n;
        
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        if(n == 1 || n == 0 || n == 2){
            cout << "YES" << endl;
            continue;
        }
        if(mp.size() == 1){
            cout << "YES" << endl;
            continue;
        }
        if((mp.size() == 2)){
            auto it = mp.begin();
            auto it2 = it;
            it2++;
            if(abs(it->second - it2->second) == 1 || (it->second - it2->second) == 0){
                cout << "YES" << endl;
            }else{
                    cout << "NO" << endl;
                }
        }else{
            cout << "NO" << endl;
        }
    }
}