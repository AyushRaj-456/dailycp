#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, nevOne = 0, posOne = 0, sum = 0, prod = 1;
        int ans;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
            if(a[i] == -1) nevOne++;
            else posOne++;
            sum += a[i];
            prod *= a[i];
        }
        if(sum >= 0){
            if(nevOne % 2 != 0){
                cout << 1 << endl;
                continue;
            }else{
                cout << 0 << endl;
                continue;
            }
        }
        else if(sum < 0 && abs(sum) % 2 != 0){
            ans = (abs(sum)/2) + 1;
            nevOne = nevOne - ans;
            if(nevOne % 2 != 0) ans = ans + 1;
            cout << ans << endl;
            continue;
        }
        else if(sum < 0 && abs(sum) % 2 == 0){
            ans = (abs(sum)/2);
            nevOne = nevOne - ans;
            if(nevOne % 2 != 0) ans = ans + 1;
            cout << ans << endl;
            continue;
        }
    }
}