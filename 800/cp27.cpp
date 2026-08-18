#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, two = 0, one = 0;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
            if(a[i] == 2){
                two++;
            }else{
                one++;
            }
        }
        
        if(two % 2 != 0) cout << -1 << endl;
        else{
            if(two == 0){
                cout << 1 << endl;
            }
            else{
                two = two/2;
                //printing
                for(int i=0; i<n;i++){
                    if(a[i] == 2){
                        two--;
                    }
                    if(two == 0){
                        cout << i+1 << endl;
                        break;
                    }
                }

            }
        }
    }
}