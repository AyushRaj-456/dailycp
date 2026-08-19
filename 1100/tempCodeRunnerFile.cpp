#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void fun(string s, set<string>& st){

    if(s.empty()) return;

    st.insert(s);
    string s1 = s, s2 = s;
    s1.erase(0, 1);
    s2.erase(1, 1);

    fun(s1, st);
    fun(s2, st);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;

        set<string> st;
        fun(s, st);

        cout << st.size() << endl;
    }
}
