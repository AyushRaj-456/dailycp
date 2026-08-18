// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        vector<pair<ll,ll>> range(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            range[i].first = (a[i]-x);
            range[i].second = (x+a[i]);
        }

        // for(int i=0; i<n; i++){
        //     cout << range[i].first << "--" << range[i].second << endl;
        // }cout << endl << endl;
        
        int chng = 0;

        int oldL = range[0].first;
        int oldR = range[0].second;
    
        for(int i = 1; i < n; i++){
            int newR = range[i].second;
            int newL = range[i].first;
    
            oldL = max(oldL, newL); // max
            oldR = min(oldR, newR); // min 
    
            if(oldL > oldR){
                chng++;
                oldL = newL;
                oldR = newR;
            }
        }
        cout << chng << endl;
    }
}
