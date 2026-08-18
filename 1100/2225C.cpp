#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>
#define vch vector<char>


int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;

        string a,b;
        cin >> a;
        cin >> b;

        vector<vector<ll>> mat(2 , vector<ll>(n, 0));

        for(int i=0; i<n-1; i++){
            if(a[i] == a[i+1] && (mat[0][i] != 1 && mat[0][i+1] != 1)){
                mat[0][i] = 1;
                mat[0][i+1] = 1;
            }
        }

        for(int i=0; i<n-1; i++){
            if(b[i] == b[i+1] && (mat[1][i] != 1 && mat[1][i+1] != 1)){
                mat[1][i] = 1;
                mat[1][i+1] = 1;
            }
        }

        for(int i=0; i<n; i++){
            if((mat[0][i] != 1 && mat[1][i] != 1) && a[i] == b[i]){
                mat[0][i] = 1;
                mat[1][i] = 1;
            }
        }

        ll cnt = 0;
        for(int i=0; i<2; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == 0) cnt++;
            }
        }

        cout << cnt/2 << endl;
    }
}
