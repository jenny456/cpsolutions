class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ca=0;
        int cb=0;
        auto comp=[](vector<int>&a, vector<int>&b) {
            return a[0]-a[1]<b[0]-b[1];
        };
        sort(costs.begin(),costs.end(),comp);
        int n=costs.size();
        for(int i=0;i<n/2;i++)
        {
            ca=ca+costs[i][0];
        }
        for(int i=n/2;i<n;i++)
        {
            ca=ca+costs[i][1];
        }
        return ca;
    }
};