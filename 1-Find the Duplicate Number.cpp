class Solution
{
public:
    int findDuplicate(vector<int> &a)
    {
        // using the slow fast method
        // it is to note that if two bodies start at the same point in a circular loop, one body travelling at double the speed of other, they will meet at the starting point
        // this is because in the time the slow one completes one round, the fast (double speed) will cover two rounds

        int s = a[0], f = a[0];

        do
        {
            // move slow only one step at a time
            s = a[s];

            // and fast two steps at a time
            f = a[a[f]];

            cout << s << " " << f << endl;

        } while (s != f);

        // however s (or f) is not the answer

        // as there may exists values that aren't in the loop, and so slow and fast will not meet at the loop starting, instead they will meet exactly 'x' steps behind it (x = no. of values that aren't in loop)

        // hence, let s and f travel at same speed now and now when they meet, it will be the answer

        f = a[0]; // Guess why!
        while (s != f)
        {
            // at same speed
            s = a[s];
            f = a[f];
        }

        return s;
    }
};