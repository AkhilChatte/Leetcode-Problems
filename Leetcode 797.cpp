class Solution {

void solve(vector<vector<int>>& graph, int source, int target, vector<vector<int>>& ans, vector<int> ds)
{
    if(source == target){
        ds.push_back(source); 
        ans.push_back(ds) ;         
    }

    ds.push_back(source) ;             

    for(auto it: graph[source]){
        solve(graph, it, target, ans, ds) ;        
    }
}

public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        vector<vector<int>> ans;
        vector<int> ds;             

        int target = graph.size() ;     
        solve(graph, 0, target-1, ans, ds) ;         

        return ans;                
    }
};