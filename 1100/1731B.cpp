#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main(){
    int t;
    cin >> t;

    __int128 mod = (__int128)(1e9 + 7);
    while(t--){
        ull n;
        cin >> n;

        __int128 nn = (__int128)n;
       // s1 = 1 4 9 20
       // s2 = 2 6 12
       __int128 s1_sum = nn*(nn+1)*(2*nn+1)/6;
       __int128 s2_sum = (nn-1)*(nn-1+1)*(nn-1+2)/3;
        
       __int128 tt = s1_sum + s2_sum;
       __int128 ans = (tt*(__int128)2022) % mod % mod;

       ull f_ans = (ull)ans;
       cout << f_ans << endl;
    }
}
