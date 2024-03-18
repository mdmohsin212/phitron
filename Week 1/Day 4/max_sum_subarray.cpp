class Solution
{
public:
    long maximumSumSubarray(int k, vector<int> &a, int n)
    {
        long long ans = 0, sum = 0, l = 0, r = 0;
        while (r < n)
        {
            sum += a[r];
            if ((r - l + 1) == k)
            {
                ans = max(ans, sum);
                sum -= a[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};