// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, z_cnt = 0;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i] == 0) z_cnt++;
        }

        int first_nz = -1, last_nz = -1;
        for(int i=0; i<n; i++) if(a[i] != 0) {
            first_nz = i;
            break;
        }
        for(int i=n-1; i>=0; i--){
            if(a[i] != 0) {
                last_nz = i;
                break;
            }
        }

        bool all_nz = true;
        for(int i=first_nz; i<=last_nz; i++){
            if(a[i] == 0){
                all_nz = false;
                break;
            }
        }
        if(z_cnt == 0) cout << 1 << endl;
        else if(z_cnt == n) cout << 0 << endl;
        else if(all_nz == true) cout << 1 << endl;
        else cout << 2 << endl;

    }
}
