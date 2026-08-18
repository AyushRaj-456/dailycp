// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll x,n;
        cin >> x >> n;
        ll net_jump;

        // Editorial  
        // 1st jump = (-1)
        // 2nd jump = (1)
        // 3rd jump = (4)
        // then 0 

        if(n%4 == 0) net_jump =  0;
        else if(n%4 == 1) net_jump = (-1*n);
        else if(n%4 == 2) net_jump = (1);
        else if(n%4 == 3) net_jump = (1+n);

        if(x%2 == 0) cout << x+net_jump << endl;
        else cout << x-net_jump << endl;
 
    }
}
