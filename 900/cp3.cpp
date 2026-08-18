#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main(){
    lli t;
    cin >> t;
    while(t--){
        lli n, k, x;
        cin >> n >> k >> x;

        lli minSum = k * (k + 1) / 2;
        lli maxSum = k * (2 * n - k + 1) / 2;

        if (x >= minSum && x <= maxSum) cout << "YES\n";
        else cout << "NO\n";
    }
}
