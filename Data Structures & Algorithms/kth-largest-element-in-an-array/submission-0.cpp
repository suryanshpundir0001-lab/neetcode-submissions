//jai SitaRam
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        //taking max heap to get top k
        priority_queue<int>pq;
        for(int i : nums){
            pq.push(i);
        }
        int m = k-1;
        while(m--){
            pq.pop();
        }
        return pq.top();
    }
};
