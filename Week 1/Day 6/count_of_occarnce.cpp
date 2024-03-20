class Solution
{
public:
    int search(string pat, string txt)
    {
        int sz = pat.size(), ans = 0, n = txt.size();
        int l = 0, r = sz;
        vector<int> cnt(256,0);
        vector<int> cnt2(256,0);
        for (int i = 0; i < sz; i++)
        {
            cnt[pat[i]]++;
            cnt2[txt[i]]++;
        }
        if (cnt == cnt2)
        {
            ans++;
        }
        while (r < n)
        {
            cnt2[txt[r]]++;
            cnt2[txt[l]]--;
            if (cnt == cnt2)
            {
                ans++;
            }
            l++;
            r++;
        }
        return ans;
    }
};