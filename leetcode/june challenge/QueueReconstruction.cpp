class Solution {
public:
    
    static bool comp(vector<int>&v1,vector<int>&v2) 
    {
        if(v1[0]>v2[0])
            return true;
        else
            if(v1[0]==v2[0] && v1[1]<v2[1])
                return true;
        return false;
    }
    
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>> ans;
        sort(people.begin(),people.end(),comp);
        for(int i=0;i<people.size();i++) 
        {
            auto it=ans.begin()+people[i][1];
            ans.insert(it,people[i]);
        }
        return ans;
        
    }
};