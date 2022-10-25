  vector<int> spiralOrder(vector<vector<int>>& matrix) {
        /*  left
          top 1   2   3   
              4   5   6
              7   8   9 bottom
                    right
        */
        int r=matrix.size(), c=matrix[0].size();
        int top = 0;
        int right = c-1;
        int bottom = r-1; 
        int left = 0;
        vector<int> v; 
            
        if(r==1){
            for(int i=0;i<c; i++)    
                v.push_back(matrix[0][i]);
            return v;
        }
        if(c==1){
            for(int i=0;i<r; i++)    
                v.push_back(matrix[i][0]);
            return v;
        }
        
        while(top<=bottom && right>=left){
            //first row
            for(int i=left; i<=right; i++)
                v.push_back(matrix[top][i]);
            top++;
        
            //last column
            for(int i=top; i<=bottom; i++)
                v.push_back(matrix[i][right]);
            right--;
            
            //last row
            if(top<=bottom){
                for(int i=right; i>=left; i--)
                    v.push_back(matrix[bottom][i]);
                bottom--;
            }
            //first column
            if(right>=left){
                for(int i=bottom; i>=top; i--)
                    v.push_back(matrix[i][left]);
                left++;
            }
                
        }
        return v; 
    }
