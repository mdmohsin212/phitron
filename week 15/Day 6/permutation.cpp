class Solution
{
public:
    void f(vector<int> &nums, vector<int> &a, vector<vector<int>> &ans, int frq[])
    {
        if (nums.size() == a.size())
        {
            ans.push_back(a);
            return;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (!frq[i])
            {
                a.push_back(nums[i]);
                frq[i] = 1;
                f(nums, a, ans, frq);
                frq[i] = 0;
                a.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> a;
        int frq[nums.size()];
        memset(frq, 0, sizeof(frq));
        f(nums, a, ans, frq);
        return ans;
    }
};