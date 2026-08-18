#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int freq[26] = {0};

        for(int i=0; i<n;i++){
            freq[s[i] - 'a']++;
        }

        int even = 0, odd = 0;
        int oddLetter = 0, evenLetter = 0;
        for(int i=0; i<26; i++){
            if(freq[i]%2 == 0){
                even++;
                evenLetter += freq[i];
            }
            else{
                odd++;
                oddLetter += freq[i];
            }
        }

        if (odd - k <= 1) cout << "Yes\n";
        else cout << "No\n";

    }
}