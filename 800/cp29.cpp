#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, ops = 0;
        cin >> n;
        // int a[n];
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        int j = 0, p =0;
        for(int i=0; i<n-1; i++){
            if(a[i] % 2 != 0 && a[i+1] % 2 != 0){
                j++;
            }else if(a[i] % 2 == 0 && j > 0){
                ops += j;
                j = 0;
            }

            if(a[i] % 2 == 0 && a[i+1] % 2 == 0){
                p++;
            }else if(a[i] % 2 != 0 && p > 0){
                ops += p;
                p = 0;
            }
        }
        cout << ops + p + j << endl;
    }
}