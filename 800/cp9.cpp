#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n-1];
        int sum = 0;
        for(int i=0;i<n-1;i++){
            cin >> arr[i];
            sum += arr[i];
        }
        sum = sum*(-1);
        cout << sum << endl;
    }
    return 0;
}