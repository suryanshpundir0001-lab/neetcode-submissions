//jai SitaRam
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        vector<int>p(n,0);
        //calculating the prefix sum array
        p[0] = nums[0];
        for(int i=1;i<n;i++){
            p[i] = nums[i] + p[i-1];
        }
        for(int i=0;i<n;i++){
            if(p[i]==k) count++;    //subarray with size 1 and sum = k
        }
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            int c = p[i] - k;        //check subarray having len > 1 using prefix sum property
            if(mp.find(c)!=mp.end()) count += mp[c];
            mp[p[i]]++;
        }
        return count;


    }
};