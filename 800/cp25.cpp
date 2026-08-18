#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string v;
        cin >> v;
        // for(int i=0; i<n;i++){
        //     char c;
        //     cin >> c;
        //     v.push_back(c);
        // }

        while(v.size() > 1){
            if(v.front() != (v.back())){     
                v.erase(v.begin());
                v.erase(v.end() - 1);
            }else{
                // cout << v.size() << endl;
                break;
            }
    
        }
        cout << v.size() << endl;
    }
}