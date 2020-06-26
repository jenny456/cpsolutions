class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.length();
        if(k>=n)
            return "0";
        stack<char>st;
        int c=0;
        // st.push(num[0]);
        int i=0;
        while(i<n)
        {
            int n=st.size();
            while(!st.empty() && k && st.top()>num[i])
            {
                st.pop();
                k--;
                
            }
            st.push(num[i]);
            i++;
        }
            
           
       while(k--)
       {
           st.pop();
       }
        string res="";
        while(!st.empty())
        {
            res=res+st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        while(res.size()>1 && res.at(0)=='0')
        {
            res=res.substr(1);
                
        }
        return res;
    }
};