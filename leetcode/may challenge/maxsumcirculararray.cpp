class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int cur_sum=A[0],max_sum=A[0],min_sum=A[0],min_ele=A[0],sum=A[0];
        for(int i=1;i<A.size();i++) 
        {
            cur_sum=max(A[i]+cur_sum, A[i]);
            max_sum=max(max_sum,cur_sum);
            
        }
        cur_sum=A[0];
        for(int i=1;i<A.size();i++)
        {
            cur_sum=min(A[i]+cur_sum,A[i]);
            min_sum=min(cur_sum,min_sum);
            sum=sum+A[i];
        }
        
        if(sum==min_sum)
            return max_sum;
        return max(max_sum,sum-min_sum);
        
    }
};