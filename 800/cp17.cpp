#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;

        if(k == x && x == 1){
            cout << "No" << endl;
        }else if(x != 1){
            cout << "Yes" << endl;
            cout << n << endl;
            for(int i = 1; i<= n; i++) cout << "1 ";
            cout << endl;
        }else if(x == 1){
            if(k == 2){
                if(n%2 != 0){
                    cout << "No" << endl; 
                }else{
                    cout << "Yes" << endl << n/2 << endl;
                    for(int i=1; i<=n/2; i++){
                        cout << "2 ";
                    }
                    cout << endl;
                }
            }else{
                if(n%2 == 0){
                    cout << "Yes" << endl;
                    cout << (n/2) << endl;
                    for(int i=1; i <= (n/2); i++){
                        cout << "2 ";
                    }
                    cout << endl;
                }else{
                    cout << "Yes" << endl << n/2 << endl;
                    for(int i=1; i<=(n/2)-1; i++){
                        cout << "2 ";
                    }
                    cout << "3 " << endl;
                }
            } 
        }
        
    }
}