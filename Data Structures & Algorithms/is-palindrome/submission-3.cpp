//jai SitaRam
class Solution {
public:
bool check(char& ch){
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')) return true;

    return false;
}
    bool isPalindrome(string s) {
        int n = s.size();
        string temp = "";
        for(int i=0;i<n;i++){
            if(check(s[i])){
                temp += tolower(s[i]);
            }
        }
        //make a copy of temp string
        string copy = temp;
        
        //reverse the temp string 
        reverse(temp.begin(),temp.end());

        return temp == copy;
    }
};
