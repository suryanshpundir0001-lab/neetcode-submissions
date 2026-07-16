//jai SitaRam
class Solution {
public:

void helper(vector<int>& height,int &ans){
    int n = height.size();
    vector<int>p(n,0);
    vector<int>s(n,0);

    p[0] = height[0];
    for(int i=1;i<n;i++){
        p[i] = max(p[i-1],height[i]);

    }
    
    s[n-1] = height[n-1];
    for(int i=n-2;i>=0;i--){
        s[i] = max(s[i+1],height[i]);
    }
    for(int i=0;i<n;i++){
        ans += min(p[i],s[i]) - height[i];
    }



}
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        helper(height,ans);

        return ans;
    }
};
