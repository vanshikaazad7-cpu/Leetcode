class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
    std::vector<std::vector<int>> triangle;
        
        for (int i = 0; i < numRows; i++) {
            // Initialize a row of size (i + 1) filled with 1s
            std::vector<int> row(i + 1, 1);
            
            // Calculate the interior values of the row
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            
            triangle.push_back(row);
        }
        
        return triangle;
    }
};