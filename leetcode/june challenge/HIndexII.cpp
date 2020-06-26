class Solution {
public:
    int hIndex(vector<int>& citations) {
        // sort(citations.begin(),citations.end());
        int n=citations.size();
        int ans=0;
        if(n==0)
            return 0;
        int start=0;
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(citations[mid]>=n-mid)
            {
                ans=n-mid;
                end=mid-1;
            }
            else
                start=mid+1;
            
        }
        return ans;
        
    }
};