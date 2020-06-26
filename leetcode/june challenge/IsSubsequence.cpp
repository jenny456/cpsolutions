class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int n=s.length();
        int m=t.length();
        if(n==0)
            return true;
        if(m==0 && n!=0)
            return false;
        if(s==t)
            return true;
        if(m<n)
            return false;
        int sind=0;
        for(int i=0;i<m;i++)
        {
            if(s[sind]==t[i] && ++sind==n)
                return true;
        }
        
        return false;
    }
};