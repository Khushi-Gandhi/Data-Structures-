class Solution {
public:
    int integerReplacement(int n) {
        int cnt=0;
        while(n!=1){
            if(n%2==0){
                n=n/2;
            }else{
                if(n==INT_MAX){
                    cnt++;
                    n/=2;
                    n++;
                }
                else if(n==3)n--;
                else if((n+1)%4)n--;
                else n++;                
            }
            cnt++;
        }
        return cnt;
    }
};
