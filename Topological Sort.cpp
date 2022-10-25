	//Function to return list containing vertices in Topological order. 
	
	// Time complexity :- O(V+E) , V-vertices and E-edges
	void topo(int v,vector<int>&vis,stack<int>&s,vector<int>adj[])
	{
	    vis[v]=1;
	    for(auto it:adj[v])
	    {
	        if(!vis[it]){
	         topo(it,vis,s,adj);   
	        }
	    }
	    s.push(v);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    stack<int>s;
	    vector<int>vis(V,0);
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            topo(i,vis,s,adj);
	        }
	    }
	    vector<int>ans;
	    while(!s.empty())
	    {
	        int t=s.top();
	        s.pop();
	        ans.push_back(t);
	    }
	    return ans;
	}