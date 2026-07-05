//jai SitaRam
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
for (int x : nums)
    st.insert(x);

int i = 0;
for (int x : st)
    nums[i++] = x;

return st.size();
    }
};