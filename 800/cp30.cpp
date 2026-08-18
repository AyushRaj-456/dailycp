#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        int val[] = {9, 9, 9, 9 , 9, 9};
        cin >> n;
        int len = n.length();
        long long int m = atoi(n.c_str());
        long long int div = pow(10,(len - 1));

        if(len == 1){
            cout << m << endl;
        }else if(len > 1){
            int xtra = m/div;
            int ans = 0;
            for(int i=1; i < len; i++){
                ans += val[len - i];
            }
            cout << ans + xtra << endl;
        }
    }
}