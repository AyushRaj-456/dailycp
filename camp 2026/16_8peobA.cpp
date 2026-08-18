#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    // int t;
    // cin >> t;
    // while(t--){

    // }

    int n, m, s, t;
    cin >> n >> m >> s >> t;

    vector<vector<pair<int,int>>> adj(n+1);

    for(int i=0; i<m; i++){
        int a, b, o;
        cin >> a >> b >> o;
        adj[a].push_back({b, o});
        adj[b].push_back({a, o});
    }

    vector<vector<vector<int>>> dist(n+1, vector<vector<int>>(3, vector<int>(3, -1)));

    queue<vector<int>> q;

    dist[s][0][0] = 0;
    q.push({s, 0, 0});

    while(!q.empty()){
        vector<int> cur = q.front();
        q.pop();

        int v = cur[0], ope = cur[1], conse = cur[2];
        int d = dist[v][ope][conse];

        for(auto &edge : adj[v]){
            int u = edge.first;
            int o = edge.second;

            int newOpe, newConse;

            if(o != ope){
                newOpe = o;
                newConse = 1;
            }else{
                if(conse == 2) continue;
                newOpe = o;
                newConse = conse + 1;
            }

            if(dist[u][newOpe][newConse] == -1){
                dist[u][newOpe][newConse] = d + 1;
                q.push({u, newOpe, newConse});
            }
        }
    }

    int ans = INT_MAX;
    for(int ope=0; ope<3; ope++){
        for(int conse=0; conse<3; conse++){
            if(dist[t][ope][conse] != -1){
                ans = min(ans, dist[t][ope][conse]);
            }
        }
    }

    if(ans == INT_MAX){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }

}