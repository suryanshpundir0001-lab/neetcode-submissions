//jai SitaRam
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        //priority queue --> max heap
        priority_queue<pair<int,int>>pq;
        for(auto i : mp){
            pair<int,int>p = {i.second,i.first};
            pq.push(p);
        }
        for(int i=1;i<=k;i++){
            pair<int,int>p = pq.top();
            ans.push_back(p.second);
            pq.pop();
        }
        return ans;
    }
};
