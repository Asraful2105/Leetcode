class Solution {
public:
    bool isHappy(int n){
        int temp,sum=0;
        int dig;
        temp=n;
        while(temp!=1)
        {
            if(temp<7) return false;
            sum=0;
            while(temp>0){
                dig=temp%10;
                sum=sum+dig*dig;
                temp/=10;
            }
            temp=sum;
        }
        if(temp==1)
        {
            return true;
        }
        if(temp==n)
        {
            return false;
        }
        return false;
    }
};