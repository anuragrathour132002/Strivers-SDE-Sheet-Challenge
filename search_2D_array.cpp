bool searchMatrix(vector<vector<int>> &mat, int target)
{

    int m = mat.size(), n = mat[0].size();
    int i = m - 1, j = 0;

    while (i >= 0 && j < n)
    {
        int val = mat[i][j];

        if (val == target)
            return true;

        (val > target) ? (i--) : (j++);
    }

    return false;
}