class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int s = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                int j = i;
                while (j < n && a[j] == 0)
                    j++;
                if (j < n)
                    swap(a[s], a[j]);
                i = j - 1;
            }
            s++;
        }
    }
};