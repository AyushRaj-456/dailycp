#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, unique = 0;
        int max = 0;
        cin >> n;
        int a[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
            if(max < a[i]) max = a[i];
        }
        int freq[max+1] = {0};
        for(int i=0; i<n;i++){
            freq[a[i]]++;
        }
        for(int i=0; i<max+1; i++){
            if(freq[i] >= 1){
                unique++;
            }
        }

        if(unique == 1){
            cout << "NO" << endl;
        }
        else{

            sort(a, a+n);
            int max_elem = a[n-1];
            cout << "YES" << endl;
            cout << max_elem << " ";
            for(int i=0; i<n-1; i++){
                cout << a[i] << " ";
            }
            cout << endl;

            // if( is_sorted(a, a + n, greater<int>()) == true){
            //     cout << "YES" << endl;
            //     for(int i=0; i<n; i++){
            //         cout << a[i] << " ";
            //     }
            //     cout << endl;
            // }
            // else{
            //     sort(a, a + n, greater<int>());
            //     cout << "YES" << endl;
            //     for(int i=0; i<n;i++){
            //         cout << a[i] << " ";
            //     }
            //     cout << endl;
            // }
        }
    }
}