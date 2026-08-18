#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
        }
        int curLen = 0, maxLen = INT_MIN;
        for(int p=0; p<n;p++){
            if(a[p] == 0){
                curLen++;
            }else{
                if(curLen >= maxLen){
                    maxLen = curLen;
                }
                curLen = 0;
            }
        } 
        if(curLen >= maxLen){
            maxLen = curLen;
        }
        cout << maxLen << endl;
    }
}