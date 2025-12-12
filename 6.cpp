#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g;
vector<int>vis;
void dfs(int node){
    vis[node]=1;
    for(int nxt: g[node])
        if(!vis[nxt]) dfs(nxt);
}
int main(){
    int n,m;
    cin>>n>>m;
    g.resize(n);
    vis.assign(n,0);
    while(m--){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int comp=0;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            comp++;
            dfs(i);
        }
    }
    cout<<comp;
}

