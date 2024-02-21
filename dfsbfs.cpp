#include<bits/stdc++.h>
using namespace std;

vector<int> bfss(int v, vector<int> adj[]) { 
    int vis[v]={0};
    vis[0]=1;
    queue<int> q;
    q.push(0);
    vector<int> res;
    while (!q.empty()){
        int node=q.front();
        q.pop();
        res.push_back(node);
        for(auto it:adj[node]){
            if (!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    return res;
}

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V]={0};
        vis[0]=1;
        stack<int> s;
        vector<int> result;
        s.push(0);
        while (!s.empty()){
            int node=s.top();
            s.pop();
            result.push_back(node);
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    s.push(it);
                }
            }
        }
        return result;
    }
};


