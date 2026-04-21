class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {

        // INDEGREE
        
        vector<bool> indegre(n , false) ; 

        for(auto &vec : edges){
            int u = vec[0]; 
            int v = vec[1]; 

            indegre[v] = true ; 
        }

        vector<int> res ; 
        for(int i = 0 ;  i  < n; i++){
            if(indegre[i] == false){
                res.push_back(i);  
              }
        }

        return res; 
    }
};