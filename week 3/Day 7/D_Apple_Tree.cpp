#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<ll, ll>
#define vi vector<pi>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
vector<ll> v[N];
ll leaf[N];
void dfs(ll src, ll par)
{
    bool flag = true;
    for (auto &&child : v[src])
    {
        if (child == par)
        {
            continue;
        }
        flag = false;
        dfs(child, src);
        leaf[src] += leaf[child];
    }
    if (flag)
    {
        leaf[src] = 1;
    }
}

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            v[i].clear();
        }
        memset(leaf, 0, sizeof(leaf));
        for (int i = 0; i < n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(1, -1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            cout << leaf[a] * leaf[b] << ln;
        }
    }
    return 0;
}