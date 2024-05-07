#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll m, n;
    cin >> m >> n;
    vector<tuple<int, int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }

    vi can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<int, int, int> T = a[i];
            int t, z, y, total, can, remaining, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = ((t * z) + y);
            can = (mid / total);
            remaining = mid % total;
            curr = ((can * z) + min(z, (remaining / t)));
            curr = min(has, curr);
            has -= curr;
            may[i] = curr;
        }

        if (!has)
        {
            for (int i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }

        return (!has);
    };

    ll l = 0, r = 1e8, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << ln;
    for (auto val : can)
    {
        cout << val << " ";
    }
    cout << ln;
    return 0;
}