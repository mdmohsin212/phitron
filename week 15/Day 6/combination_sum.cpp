class Solution
{
public:
    void f(vector<vector<int>> &ans, vector<int> &a, vector<int> &nums, int target, int sum, int idx)
    {
        if (sum == target)
        {
            ans.push_back(a);
            return;
        }
        for (int i = idx; i < nums.size(); i++)
        {
            if (sum + nums[i] > target)
                continue;
            a.push_back(nums[i]);
            f(ans, a, nums, target, sum + nums[i], i);
            a.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int> &nums, int target)
    {
        vector<vector<int>> ans;
        vector<int> a;
        sort(nums.begin(), nums.end());
        f(ans, a, nums, target, 0, 0);
        return ans;
    }
};