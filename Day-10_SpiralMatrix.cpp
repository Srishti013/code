class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        int row = 0;
        int col = 0;
        vector<int> output;
        
        while(row<r && col<c)
        {
           
           for(int i=col; i<c; i++)
               output.push_back(matrix[row][i]);
           row++;
           
          
           for(int i=row; i<r; i++)
               output.push_back(matrix[i][c-1]);
           c--;
           
           
            if(row<r)
            {
                for(int i=c-1; i>=col; --i)
                    output.push_back( matrix[r-1][i]);
                r--;
            }
           
          
            if(col<c)
            {
                for(int i=r-1; i>=row; --i)
                    output.push_back( matrix[i][col]);
                col++;    
            }   
           
        }
        return output;
        
    }
};
