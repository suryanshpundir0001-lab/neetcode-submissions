//jai SitaRam
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int m = ceil(n/3);
        vector<int>ans;
        for(auto i : mp){
            if(i.second > m) ans.push_back(i.first);
        }
        return ans;
    }
};