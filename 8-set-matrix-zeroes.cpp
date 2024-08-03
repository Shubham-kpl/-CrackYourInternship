class Solution
{
public:
#define f(i, a, b) for (int i = a; i <= b; i++)
#define vi vector<int>

    void setZeroes(vector<vector<int>> &mat)
    {
        int m = mat.size(), n = mat[0].size();

        int f1 = 0, f2 = 0;

        // first checking first row and first column
        // if first row contains a '0', f1 = 1
        // if first column contains a '0', f2 = 1
        f(i, 0, n - 1)
        {
            if (mat[0][i] == 0)
            {
                f1 = 1;
                break;
            }
        }
        f(i, 0, m - 1)
        {
            if (mat[i][0] == 0)
            {
                f2 = 1;
                break;
            }
        }

        // now the turn of other rows and columns
        f(i, 1, m - 1)
        {
            f(j, 1, n - 1)
            {
                // if any element is 0:
                // make the first element of its row and first element of its
                // column 0
                if (mat[i][j] == 0)
                    mat[i][0] = mat[0][j] = 0;
            }
        }

        // if either the first row element or the first column element is 0,
        // make that element 0
        f(i, 1, m - 1)
        {
            f(j, 1, n - 1)
            {
                if (mat[i][0] == 0 || mat[0][j] == 0)
                    mat[i][j] = 0;
            }
        }

        // if first row contains a 0, make the whole row zero
        if (f1)
        {
            f(i, 0, n - 1) mat[0][i] = 0;
        }

        // if first column contains a 0, make the whole column zero
        if (f2)
        {
            f(i, 0, m - 1) mat[i][0] = 0;
        }
    }
};