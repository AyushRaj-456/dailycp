// common part

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        string s = "1";
        bool inc_part = true, dec_part = false;
        ll inc_cnt = 1, dec_cnt = 0;
        ll first = 0, sec = 0, new_start = 0;

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        first = a[0];
        for(int i=1; i<n; i++){
            if(a[i] >= a[i-1] && inc_part == true){
                inc_part = true;
                inc_cnt++;
                s.push_back('1');
            }else{
                dec_part = true;
                inc_part = false;
                dec_cnt++;
                sec = a[i];
                new_start = i+1;
                s.push_back('1');
                break;
            }
        }

        if(dec_part == true){
            if(sec > first){
                for(int i=new_start; i<n; i++){
                    if(a[i] >= sec && a[i] <= first){
                        s.push_back('1');
                    }else{
                        s.push_back('0');
                    }
                }
            }else{
                for(int i=new_start; i<n; i++){
                    if(a[i] >= first && a[i] <= sec){
                        s.push_back('1');
                    }else{
                        s.push_back('0');
                    }
                }
            }
        }
        cout << s << endl;
        // cout << first<< " --" << sec << endl;
    }
}
