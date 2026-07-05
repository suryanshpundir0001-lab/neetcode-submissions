//jai SitaRam
class Solution {
public:
bool check(vector<int>&piles,int m,int h){
    int n = piles.size();
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += (piles[i] + m - 1) / m;
    }
    if(sum <= h) return true;
    return false;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int ans = 0;
        int st = 1;
        int end = *max_element(piles.begin(), piles.end());

        while(st<=end){
            int mid = st + (end - st)/2;
            if(check(piles,mid,h)){
                ans = mid;
                end = mid-1;
            }else{
                st = mid +1;
            }
        }
        return ans;
    }
};
