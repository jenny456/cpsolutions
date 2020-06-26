class Solution {
public:
    static bool cmp(pair<char,int>&a, pair<char,int>&b)
    {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        if(s.length()==0 || s.length()==1 || s.length()==2) return s;
        string ans="";
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=1;
            }
            else
                mp[s[i]]++;
        }
        vector<pair<char,int>>v;
        for(auto i :mp )
        {
            v.push_back(make_pair(i.first,i.second));
            
        }
        sort(v.begin(),v.end(),cmp);
        for(auto& i : v)
        {
            while(i.second > 0)
            {
                ans+= i.first;
                --i.second;
            }
        }
        
        return ans;
    }
};