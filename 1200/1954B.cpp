#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        vll a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n <= 2 || a[0] != a[n-1]) cout << "-1" << endl;
        else{
            ll f = a[0];
            ll c = 0;
            ll ans = 1e15;

            for(int i=0; i<n; i++){
                if(f == a[i]) c++;
                else{
                    ans = min(c,ans);
                    c = 0;
                }
            }
            if(ans == 1e15) cout << "-1" << endl;
            else cout << min(ans,c) << endl;
        }
    }
}