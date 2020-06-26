class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
       while(num>0)
       {
           num=num-i;
           if(num==0)
               return true;
           i=i+2;
       }
        return false;
    }
};