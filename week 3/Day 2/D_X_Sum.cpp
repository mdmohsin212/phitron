#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
ll n, m;
ll a[205][205];
ll sum = 0;
vector<pi> d = {{-1, -1}, {1, 1}, {-1, 1}, {1, -1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
ll dfs(int si, int sj)
{
    ll sum = a[si][sj];
    for (int i = 0; i < 4; i++)
    {
        ll ni = si + d[i].first;
        ll nj = sj + d[i].second;
        while (valid(ni, nj))
        {
            sum += a[ni][nj];
            ni += d[i].first;
            nj += d[i].second;
        }
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        ll ans = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum = dfs(i, j);
                ans = max(ans, sum);
            }
        }
        cout << ans << ln;
    }
    return 0;
}
