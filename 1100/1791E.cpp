#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, neg = 0, absSum = 0;
        cin >> n;

        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
            absSum += abs(a[i]);
            if(a[i] < 0) neg++;
        }

        sort(a.begin(), a.end());
        if(neg == 0 || neg%2 == 0){
            cout << absSum << endl;
        }
        else if(neg == n){
            cout << absSum - abs(a[n-1]);
        }else{
            int ans = 0;
            for(int i=0; i<n-1; i++){
                if(a[i] < 0 && a[i+1] >= 0){
                    int posVal = a[i+1];
                    int negVal = a[i];

                    if(abs(negVal) > posVal){
                        ans = absSum - posVal;
                    }else{
                        ans = absSum - abs(negVal);
                    }
                }
            }

            cout << ans << endl;
        }

    }
}
