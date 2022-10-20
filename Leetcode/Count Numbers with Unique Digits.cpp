class Solution {
public:
   
    int countNumbersWithUniqueDigits(int n) {
        
        if(n==0)
            return 1;
        
        int p=1;
        for(int i=1;i<=n;i++)
        {
            if(i==1||i==2)
                p=p*9;
            else
                p=p*(9+2-i);
        }
        int ans=p+countNumbersWithUniqueDigits(n-1);
        return ans;
    }
};
