#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t;
	cin >> t;
	while(t--){
	    ll n,k;
	    cin >> n >> k;
	    vector<ll> a(n), b(n);
	    map<int,int> uniq;
	    
	    int maxi_b = INT_MIN, mini_b = INT_MAX; 
	    ll neg_cnt = 0;
	    ll val = 0;
	    for(int i=0; i<n; i++){
            cin >> a[i];
            maxi_b = max( (ll)maxi_b, b[i]);
	        mini_b = min( (ll)mini_b, b[i]);
        }
	    for(int i=0; i<n; i++){
	        cin >> b[i];
	        maxi_b = max( (ll)maxi_b, b[i]);
	        mini_b = min( (ll)mini_b, b[i]);
	        
	        if(b[i] == -1){
	            neg_cnt++;
	        }else{
	            val = b[i]+a[i];
	            uniq[(b[i] + a[i])]++ ;
	        }
	    }
	    
	    if(uniq.size() > 1) cout << 0 << endl;
	    else{
	        
	        if(neg_cnt == n){
	            int ans = (mini_b+k) - (maxi_b - mini_b);
	            cout << ans-2 << endl;
	        }else{
	            bool valid = true;
	            for(int i=0; i<n; i++){
	                
	                if(val < a[i]){
	                    valid = false;
	                    break;
	                }
	                
	                
	                if(a[i] + k < val){
	                    valid = false;
	                    break;
	                }	                
	            }
	            if(valid) cout << 1 << endl;
	            else cout << 0 << endl;
	        }
	        
	    }
	    
	    
	}

}
