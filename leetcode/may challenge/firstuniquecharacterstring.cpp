class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        queue<char> q;
        for(int i=0;i<s.length();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=1;
            }
            else
                mp[s[i]]++;
            q.push(s[i]);
            
        }
        int i=0;
        while(!q.empty())
        {
            char c=q.front();
            if(mp[c]==1)
            {
                return i;
            }
            q.pop();
            i++;
                
        }
        return -1;
        
    }
};