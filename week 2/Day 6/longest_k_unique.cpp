class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int n = s.size(), l = 0, r = 0, ans = 0, sum = 0;
        map<char, int> mp;
        while (r < n)
        {
            mp[s[r]]++;
            if (mp[s[r]] == 1)
                sum++;
            if (sum == k)
            {
                while ((r + 1) < n && mp[s[r + 1]] != 0)
                {
                    r++;
                    mp[s[r]]++;
                }
                ans = max(ans, r - l + 1);
                while (sum != k - 1)
                {
                    if (mp[s[l]] == 1)
                    {
                        sum--;
                        mp[s[l]]--;
                        l++;
                        break;
                    }
                    mp[s[l]]--;
                    l++;
                }
            }
            r++;
        }
        return ans == 0 ? -1 : ans;
    }
};