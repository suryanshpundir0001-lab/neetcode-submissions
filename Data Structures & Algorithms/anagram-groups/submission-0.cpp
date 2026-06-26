//jai SitaRam
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& arr) {
        int n = arr.size();
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            string copy = arr[i];
            sort(copy.begin(),copy.end());
            mp[copy].push_back(arr[i]);
        }

        //now do extract the vectors from the map
        for(auto i : mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};
