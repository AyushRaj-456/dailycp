#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        n = n%3;
        if(n == 1 || n == 2){
            cout << "First" << endl;
        }else{
            cout << "Second" << endl;
        }
    }
}