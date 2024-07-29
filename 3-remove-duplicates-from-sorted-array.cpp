class Solution
{
public:
    int removeDuplicates(vector<int> &a)
    {
        int curr = 0;
        int cnt = 1;
        int n = a.size();
        for (int i = 1; i < n; i++)
        {
            if (a[i] != a[curr])
            {
                a[++curr] = a[i];
                cnt++;
            }
        }
        return cnt;
    }
};