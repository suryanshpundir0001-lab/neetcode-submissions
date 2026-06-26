//jai SitaRam
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxi = INT_MIN;
        for(auto i : mp){
            if(i.second > maxi) maxi = i.second;
        }

        int ans = -1;
        for(auto i : mp){
            if(i.second == maxi) ans = i.first;
        }
        return ans;
    }
};