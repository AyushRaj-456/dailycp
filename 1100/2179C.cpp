#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        vll a(n);

        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        // ai % ai = 0
        // eg : 5 12 17 -> 5%5 , 17%17, 12%12 = 0
        // x >= 5 so k = 5

        // but 5 % 6( or > 5) = 5
        // new target -> 12 % x = 5 -> 7??
        // 12% 7 = 5, here 7 > 5 so k can be 7

        // and for ai = 17, 17 % 12 = 5. so x >= k for k = 5 or 7 
        //  so cout max(5,7) OR....

        cout << max(a[0], a[1] - a[0]) << endl;;


    }
}
