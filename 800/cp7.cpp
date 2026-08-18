#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        string s1,s2;
        cin >> s1 >> s2;

        if(s1 == s2 || strstr(s1.c_str(), s2.c_str()) != NULL){
            cout << "0" << endl;
            continue;
        }
        int p = 6;
        int ans = 0;
        int not_found = 1;
        while(p--){
            s1.append(s1);
            ans++;
            if(strstr(s1.c_str(), s2.c_str()) != NULL){
                cout << ans << endl;
                not_found = 0;
                break;
            }
        }
        if(not_found){
            cout << "-1" << endl;
        }
    }
}