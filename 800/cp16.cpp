#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,min_d = INT_MAX, cur_d = 0;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
        }
        for(int i=1; i<n; i++){
            cur_d = a[i] - a[i-1];
            if(cur_d <= min_d){
                min_d = cur_d;
            } 
        }

        if(min_d < 0) cout << "0" << endl;
        else if(min_d == 0) cout << "1" << endl;
        else cout << (min_d/2)+1 << endl;
    }
}