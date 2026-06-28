//jai SitaRam
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        //now we will take each pair of polls as the expected solution 
        int maxi = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int area = min(heights[i],heights[j])*(j-i);
                //upadate the maxximum area
                maxi = max(maxi,area);
            }
        }
        return maxi;
    }
};
