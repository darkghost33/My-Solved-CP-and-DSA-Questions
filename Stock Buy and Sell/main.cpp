class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0;
        int minP = prices[0];
        for(int i=0; i<prices.size(); i++)
        {
            minP = min(minP , prices[i]);
            prof = max(prof,prices[i] - minP);
        }
        return prof;
    }
};