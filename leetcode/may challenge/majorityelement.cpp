class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int no1=INT_MAX,no2=INT_MAX,freq1=0,freq2=0;
        for(int i=0;i<nums.size();i++) {
            if(no1==nums[i])
            {
                freq1++;
            }
             else if(no2==nums[i])
            {
                freq2++;
            }
           else if(freq1==0)
            {
                no1=nums[i];
                freq1++;
            }
            
             
            else
                if(freq2==0)
                {
                    no2=nums[i];
                    freq2++;
                }
            else{
                freq1--;
                freq2--;
            }
           
            
        }
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==no1)
                c1++;
            else
                if(nums[i]==no2)
                    c2++;
        }
        
        if(c1>(nums.size()/2))
            return no1;
        else if(c2>(nums.size()/2))
           return no2;
           else return -1;
    }
        
};