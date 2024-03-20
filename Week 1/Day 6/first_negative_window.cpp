vector<long long> printFirstNegativeInteger(long long int a[],
                                            long long int N, long long int k)
{
    vector<long long> ans;
    queue<long long> q;
    long long l = 0, r = 0;
    while (r < N)
    {
        if (a[r] < 0)
        {
            q.push(a[r]);
        }
        if ((r - l) + 1 == k)
        {
            if (!q.empty())
            {
                ans.push_back(q.front());
            }
            else
            {
                ans.push_back(0);
            }
            if (a[l] < 0)
            {
                q.pop();
            }
            l++;
        }
        r++;
    }
    return ans;
}
