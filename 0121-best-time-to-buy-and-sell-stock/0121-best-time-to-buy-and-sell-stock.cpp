class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPro=prices[0];
        int maxPro=0;
        for(int i=1;i<n;i++)
        {
            if(prices[i]-minPro>maxPro)
            {
                maxPro=prices[i]-minPro;
            }
            if(minPro>prices[i]){
                minPro=prices[i];
            }
        }
        return maxPro;
    }
};