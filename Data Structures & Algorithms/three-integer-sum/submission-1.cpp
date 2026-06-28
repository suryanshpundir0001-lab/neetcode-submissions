//jai SitaRam
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        //sort the input array
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        for(int i=0;i<n;i++){

            //now i can take two pointers ...and make the problem as like 2 sum
            int j = i+1;
            int k = n-1;
            while(j<k){
                int sum = nums[j] + nums[k];
                int target = -1*nums[i];
                if(sum == target){
                     st.insert({nums[i],nums[j],nums[k]});
                     j++;
                     k--;
                }else if(sum > target){
                    k--;
                }else{
                    j++;
                }
            }
        }
        //putting the solution back to the vector of vector
        for(auto &i : st){
            ans.push_back(i);
        }
        return ans;
    }
};
