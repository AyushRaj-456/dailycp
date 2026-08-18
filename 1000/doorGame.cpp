// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll l,r, L, R;
        cin >> l >> r;
        cin >> L >> R;

        ll cnt = 0;
            for(int j=l; j<=r; j++){
                if(j <= R && j >= L ) cnt++;
            }

        ll temp = cnt;
        cnt = cnt-1;

        // ll comn = max((ll)0, min(R,r) - max(L,l) + 1);
       
        if(l == L && r != R || l != L && r == R) cnt++;
        else if(l == L && r == R){
            cout << temp-1 << endl;
            continue;
        }
        else if(L > r || R < l) cnt = cnt+2;
        else cnt += 2;

        cout << cnt << endl;
        
        }
}
