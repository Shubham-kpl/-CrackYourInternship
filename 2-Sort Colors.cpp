class Solution
{
public:
    void sortColors(vector<int> &a)
    {
        int n = a.size();
        int s = 0;
        int e = n - 1;

        // we have to just place 0 and 2 in their right position, 1 will be
        // placed by itself.

        for (int i = 0; i < n; i++)
        {

            // whenever we encounter a 0, we will swap it with a[s] and
            // increment s
            if (a[i] == 0)
            {
                swap(a[i], a[s]);
                s++;
            }

            // if its a 2, decrement e until its != 2, and the swap with a[e]
            else if (a[i] == 2)
            {
                while (e >= 1 && e < n && a[e] == 2)
                {
                    e--;
                }
                if (e > i)
                    swap(a[i], a[e]);

                // decrement i if a[i] = 0, because we may have a 1 before ith index
                if (a[i] == 0)
                    i--;
            }
        }
    }
};