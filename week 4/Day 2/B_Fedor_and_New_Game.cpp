#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vi a(m + 1);
    for (int i = 0; i <= m; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> v;
    for (int i = 0; i <= m; i++)
    {
        vector<int> b;
        for (int k = 0; k < n; k++)
        {
            if ((a[i] >> k) & 1)
            {
                b.push_back(1);
            }
            else
            {
                b.push_back(0);
            }
        }
        v.push_back(b);
    }
    int ans = 0;
    vector<int> fedor = v[m];
    for (int i = 0; i < v.size() - 1; i++)
    {
        vector<int> b = v[i];
        int cnt = 0;
        for (int k = 0; k < n; k++)
        {
            if (fedor[k] != b[k])
            {
                cnt++;
            }
        }
        if (cnt <= k)
        {
            ans++;
        }
    }
    cout << ans << ln;
    return 0;
}