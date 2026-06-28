//jai SitaRam
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        //right max vector
        vector<int>rm(n,0);
        rm[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--){
            rm[i] = max(prices[i],rm[i+1]);
        }
        int maxi = 0;
        for(int i=0;i<n-1;i++){
            maxi = max(maxi,rm[i+1]-prices[i]);
        }
        return maxi;
    }
};
