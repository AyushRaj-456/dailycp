#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll n2 = (n*(n-1))/2;
        vector<int> b(n2);
        set<int> st;
        map<int,int> mp;

        int maxi = INT_MIN;
        for(int i=0; i<n2; i++){
            cin >> b[i];
            mp[b[i]]++;
            st.insert(b[i]);
            maxi = max(maxi, b[i]);
        }

        int max_occ = 0;
        int temp = 0;
        for(auto it : mp){
            if(it.second >= temp){
                max_occ = it.first;
            }
        }

        st.insert(maxi+1);
        int xtra = n - st.size();
        while(xtra--){
            st.insert(max_occ);
        }



        for(auto it : st){
            cout << it << " ";
        }cout << endl;
    }
}
