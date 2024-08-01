class Solution
{
public:
    void merge(vector<int> &a, int m, vector<int> &b, int n)
    {
        int _m = 0, _n = 0, k = 0;
        vector<int> ans(m + n);
        while (_m < m && _n < n)
        {
            if (a[_m] <= b[_n])
            {
                ans[k++] = a[_m++];
            }
            else
            {
                ans[k++] = b[_n++];
            }
        }

        while (_m < m)
        {
            ans[k++] = a[_m++];
        }

        while (_n < n)
        {
            ans[k++] = b[_n++];
        }
        a = ans;
    }
};