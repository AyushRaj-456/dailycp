#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,sum = 0;
        cin >> n;
        int a[n], even[1], odd[1];
        for(int i=0; i<n;i++){
            cin >> a[i];
            sum += a[i];
            if(a[i] % 2 == 0) even[0] = a[i];
            if(a[i] % 2 != 0) odd[0] = a[i];
        }
        if((sum - even[0]) % 2 == 0){
            cout << "Yes" << endl;
        }
        else if((sum - odd[0]) % 2 != 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}