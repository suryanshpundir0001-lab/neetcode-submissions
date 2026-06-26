//jai SitaRam
class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        
        int n = arr.size();
        sort(arr.begin(),arr.end());
        string ans = "";
        string a = arr[0];
        string b = arr[n-1];
        int m = min(a.size(),b.size());

        for(int i=0;i<m;i++){
            if(a[i]==b[i]) ans += a[i];
            else break;
        }
        return ans;
    }
};