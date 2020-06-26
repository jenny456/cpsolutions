class Solution {
public:
    int findComplement(int num) {
        int res=0,i=0;
        while(num) {
            if(num%2 ==0)
            {
                res=res+pow(2,i);
            }
            i++;
            num=num/2;
        }
        return res;
        
    }
};