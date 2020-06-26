class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<vector<int>>> adjList(n);
        for(auto f:flights) 
        {
            int start=f[0];
            int end=f[1];
            int cost=f[2];
            
            adjList[start].push_back({end,cost});
        }
        
        queue<vector<int>> q;
        q.push({src,0,-1});
        int min_cost=INT_MAX;
        while(!q.empty())
        {
            vector<int> curStation = q.front();
            q.pop();
            int curCity=curStation[0];
            int curCost=curStation[1];
            int curStop=curStation[2];
             if(curCity==dst)
                 min_cost=min(min_cost,curCost);
           for( auto p: adjList[curCity])
           {
               if(curStop+1<=K  && curCost+p[1]<=min_cost)
                   q.push({p[0],p[1]+curCost, curStop+1});
           }
            
        }
        return min_cost==INT_MAX?-1:min_cost;
        
    }
};