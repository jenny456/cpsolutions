class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=p.length();
        unordered_map<char,int> mp;
        // unordered_map<char,int> mpd;
        vector<int> ans;
        if(p.length()>s.length())
            return ans;
        
        int start=0;
        for(int i=0;i< n;i++)
        {
            if(mp.find(p[i])==mp.end())
                mp[p[i]]=1;
            else
                mp[p[i]]++;
        }
        // mpd=mp;
        int matched=0;
        for(int end=0;end< s.length();end++)
        {
            if(mp.find(s[end])!=mp.end())
            {
                mp[s[end]]--;
               if(mp[s[end]]==0)
                   matched++;
                
            }
            if(matched==mp.size())
                ans.push_back(start);
            if(end-start+1>=n)
            {
                if(mp.find(s[start])!=mp.end())
                {
                     if(mp[s[start]]==0)
                        matched--;
                    mp[s[start]]++;
                   
                }
                start++;
            }
            
        }
        return ans;
        
    }
};