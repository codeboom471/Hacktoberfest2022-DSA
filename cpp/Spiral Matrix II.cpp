class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      
        vector<vector<int>>ans(n,vector<int>(n));
        int i, k = 0, l = 0,m=n;
 
    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 int count=1;
    while (k < m && l < n) {
        /* Print the first row from
               the remaining rows */
        for (i = l; i < n; ++i) {
            ans[k][i]=count;
            count++;
        }
        k++;
 
        /* Print the last column
         from the remaining columns */
        for (i = k; i < m; ++i) {
            ans[i][n - 1]=count;
            count++;
        }
        n--;
 
        /* Print the last row from
                the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                ans[m - 1][i]=count;
                count++;
            }
            m--;
        }
 
        /* Print the first column from
                   the remaining columns */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                ans[i][l]=count;
                count++;
            }
            l++;
        }
    }
        return ans;
    }
};
