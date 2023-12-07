    int left = 0;
    int right = 3 - 1; // Here 3 refers to c (number of columns)
    // Row
    int top = 0;
    int bottom = 3 - 1; // Here 3 refers to r (number of rows)
    vector<int> ans;

    while (top <= bottom && left <= right)
    { // Step 1: Left to Right
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        // Have to check if bottom is not greater than top
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
