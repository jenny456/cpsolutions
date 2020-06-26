class Solution {
public:
   vector<int> fact = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    string getPermutation(int n, int k) {
       string ans="";
        vector<char> c(n);
        for(int i=0;i<n;i++) {
            c[i]=i+1+'0';
            // cout<<c[i]<<" ";
        }
        
        k--;
        while(n)
        {
            int pos=k/fact[--n];
            // cout<<pos<<endl;
            ans=ans+c[pos];
            c.erase(begin(c)+pos);
            k=k%fact[n];
        }
        return ans;
    }
};