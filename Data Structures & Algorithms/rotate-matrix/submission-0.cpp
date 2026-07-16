//jai SitaRam
class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();

        //take transpose of a mat
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(mat[i][j] , mat[j][i]);
            }
        }

        //now reverse each row of the matrix
        for(int i = 0; i < n; i++) {
        reverse(mat[i].begin(), mat[i].end());
    }

    }
};
