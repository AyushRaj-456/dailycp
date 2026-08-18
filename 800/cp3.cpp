// Cover in water

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int hax =  0, dot = 0, dot3 = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '#') hax++;
            else dot++;
        }
        for(int i=0; i<=n-3;i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                dot3++;
            }
        }

        if(dot3 == 0){
            cout << dot << endl;
        }else{
            cout << 2 << endl;
        }
    }
}