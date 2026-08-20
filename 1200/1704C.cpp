#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>



int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;

        vll a(m);
        for(int i=0; i<m; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        vll diff;
        diff.push_back((n - a[m-1]) + (a[0] - 1));

        for(int i=1; i<m; i++){
            diff.push_back(abs(a[i] - a[i-1]) - 1);
        }

        sort(diff.begin(), diff.end(), greater<ll>());
        
        // for(int i=0; i<m; i++){
        //     cout << diff[i] << " ";
        // }cout << endl;
        
        ll j = 0, surv = 0;
        for(int i=0; i<diff.size(); i++){
            ll pq = diff[i] - j;
                if(pq == 1){
                    surv += pq;
                }else if(pq > 0){
                    surv += pq - 1;
                }
            j += 4;
        }

        cout << n - surv << endl;
    }
}
