#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,x,y;
        cin >> n >> x >> y;

        vector<int> b(n);
        for(int i=0; i<n; i++){
            if(i%2== 0) b[i] = 1;
            else b[i] = -1;
        }
        b[x-1] = 1;
        b[y-1] = 1;
        
        for(int i=0; i<n; i++){
            cout << b[i] << " ";
        }cout << endl;
    }
}
