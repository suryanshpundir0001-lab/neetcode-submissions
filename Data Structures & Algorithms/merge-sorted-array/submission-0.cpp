//jai SitaRam
class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        // int n = nums1.size();
        // int m = nums2.size();
        for(int i=0;i<m;i++){
            nums1.pop_back();
        }
        for(int i=0;i<m;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());

    }
};