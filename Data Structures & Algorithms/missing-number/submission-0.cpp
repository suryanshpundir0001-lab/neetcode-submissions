//jai SitaRam
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int given = 0;
        for(int i : nums){
            given += i;
        }
        return sum - given;
    }
};
