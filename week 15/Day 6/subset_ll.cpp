class Solution
{
public:
    void f(vector<vector<int>> &ans, vector<int> &a, vector<int> &nums, int idx)
    {
        ans.push_back(a);
        for (int i = idx; i < nums.size(); i++)
        {
            if (i > idx and nums[i] == nums[i - 1])
                continue;
            a.push_back(nums[i]);
            f(ans, a, nums, i + 1);
            a.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> a;
        sort(nums.begin(), nums.end());
        f(ans, a, nums, 0);
        return ans;
    }
};