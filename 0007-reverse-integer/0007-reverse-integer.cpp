class Solution {
public:
    int reverse(int x) {
        long long int temp=x;
        long long int dig;
        long long int sum=0;
        if(temp<0)
        {
            temp*=-1;
            while(temp>0)
            {
                dig=temp%10;
                sum=sum*10+dig;
                temp/=10;
            }
            sum*=-1;
        }
        while(temp>0)
        {
            dig=temp%10;
            sum=sum*10+dig;
            temp/=10;
        }
        if(sum > INT_MAX || sum < INT_MIN) return 0;
        return sum;
    }
};