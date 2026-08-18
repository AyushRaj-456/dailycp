#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(c%2 == 0){
            a = a+(c/2);
            b = b+(c/2);
        }
        else{
            a = a+(c/2)+1;
            b = b+(c/2);
        }
        if(a>b) cout << "First" << endl;
        else if(b>=a) cout << "Second" << endl;
    }
    return 0;
}