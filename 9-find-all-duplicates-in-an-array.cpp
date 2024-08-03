// All answer credits to @nextsde
class Solution
{
public:
    vector<int> findDuplicates(vector<int> &a)
    {
        int n = a.size();

        vector<int> ans;

        // See, think like this: "If a switch is already turned on, it can't be
        // turned on again"

        // But what does this mean here:

        // See, traverse the whole array index-by-index
        // and for an index "idx", flip the value at index "a[idx] - 1" (as the
        // values are from 1 to n and not 0 to n) (Flip means make negative)

        // Carry on doing this for each index

        // and if at any point you see that a value is already negative at
        // a[idx] - 1, you get to know that "idx" has appeared twice (or switch
        // is already on :))

        // Add it to the answer

        for (int i = 0; i < n; i++)
        {
            if (a[abs(a[i]) - 1] < 0)
            {
                ans.push_back(abs(a[i]));
            }
            else
                a[abs(a[i]) - 1] = -a[abs(a[i]) - 1];
        }

        return ans;
    }
};