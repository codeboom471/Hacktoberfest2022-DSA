//Problem: https://leetcode.com/problems/is-graph-bipartite/
//1st-way
bool isBipartite(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<int> color(n); // 0: uncolored; 1: color A; -1: color B
        
    queue<int> q; // queue, resusable for BFS    
	
    for (int i = 0; i < n; i++) {
        if (color[i]) continue; // skip already colored nodes
        
        // BFS with seed node i to color neighbors with opposite color
        color[i] = 1; // color seed i to be A (doesn't matter A or B) 
        for (q.push(i); !q.empty(); q.pop()) {
            int cur = q.front();
            for (int neighbor : graph[cur]) 
            {
                if (!color[neighbor]){ // if uncolored, color with opposite color
                    color[neighbor] = -color[cur];
                    q.push(neighbor);
                } 
                else if (color[neighbor] == color[cur]) 
                    return false; // if already colored with same color, can't be bipartite!
            }        
        }
    }
    
    return true;
}

//Problem: https://practice.geeksforgeeks.org/problems/bipartite-graph/1/
//2nd-way
bool bipartiteBfs(int src, vector<int> adj[], int color[]) {
    queue<int>q;
    q.push(src); 
    color[src] = 1; 
    while(!q.empty()) {
        int node = q.front(); 
        q.pop();
        
        for(auto it : adj[node]) {
            if(color[it] == -1) {
                color[it] = 1 - color[node]; 
                q.push(it); 
            } else if(color[it] == color[node]) {
                return false; 
            }
        }
    }
    return true; 
}
bool checkBipartite(vector<int> adj[], int n) {
    int color[n];
    memset(color, -1, sizeof color); 
    for(int i = 0;i<n;i++) {
        if(color[i] == -1) {
            if(!bipartiteBfs(i, adj, color)) {
                return false;
            }
        }
    }
    return true; 
}
