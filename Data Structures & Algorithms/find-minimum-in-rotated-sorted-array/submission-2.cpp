//jai SitaRam
class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int ans = INT_MAX;
        int st = 0;
        int end = n-1;

        while(st<end){
            int mid = st + (end - st)/2;
            ans = nums[mid];
            if(nums[end]<nums[mid]){
                st = mid + 1;
             }else{
                end = mid;
            }
        }
        return nums[st];
    }
};
