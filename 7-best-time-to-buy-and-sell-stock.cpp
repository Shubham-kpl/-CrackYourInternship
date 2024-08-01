class Solution
{
public:
    int maxProfit(vector<int> &a)
    {
        int n = a.size();
        int ans = 0;

        int curr = a[0], pr = 0;

        for (int i = 1; i < n; i++)
        {
            if (curr > a[i])
                curr = a[i];
            pr = max(pr, a[i] - curr);
        }

        return pr;
    }
};