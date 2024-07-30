class Solution
{
public:
    int majorityElement(vector<int> &a)
    {

        // denotes frequency
        int fr = 0;

        // if an element occurs more than n / 2 times, value of fr will be > 0 at the end, (self explanatory)

        int ans = a[0];
        for (auto i : a)
        {
            if (ans == i)
                fr++;
            else
                fr--;
            if (fr == 0)
            {
                ans = i;
                fr = 1;
            }
        }

        return ans;
    }
};