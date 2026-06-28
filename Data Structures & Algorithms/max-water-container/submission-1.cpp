//jai SitaRam
class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = 0;
        
        int i = 0;
        int j = n-1;
        while(i<j){
            int l = j-i;
            int h = min(heights[i],heights[j]);
            int area = l*h;

            maxi = max(maxi,area);
            if(heights[i]>heights[j]){
                j--;
            }else i++;
        }
        return maxi;
    }
};
