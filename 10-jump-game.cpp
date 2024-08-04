class Solution
{
public:
    bool canJump(vector<int> &a)
    {
        int n = a.size();

        // lets start seeing from the last index, if it is reachable or not
        int targetIdx = n - 1;

        for (int i = n - 2; i >= 0; i--)
        {

            // this is the way of checking
            // we can jump  at most a[i] from ith index
            if (i + a[i] >= targetIdx)
            {
                targetIdx = i;
            }
        }

        // if we can reach n - 1 by starting jump from index 0
        return targetIdx == 0;
    }
};