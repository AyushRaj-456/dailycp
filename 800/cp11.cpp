#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, min = INT_MAX;
    cin >> n;
    int a[n];
    for(int i=0; i<n;i++){
        cin >> a[i];
        if(min > abs(0 - a[i])){
            min = abs(0 - a[i]);
        }
    }

    for(int i=0; i<n;i++){
        if(a[i] == 0){
            cout << '0' << endl;
            return 0;
        }
    }
    cout << min << endl;
    return 0;
}