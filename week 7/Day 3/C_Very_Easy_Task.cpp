#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
bool ok(int t, int n, int x, int y)
{
    if (t < min(x, y)) return false;
    ll time = 1;
    t -= min(x, y);
    time += (t / x) + (t / y);

    return time >= n;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, y;
    cin >> n >> x >> y;
    ll l = 0, r = max(x, y) * n, mid;
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        if (ok(mid, n, x, y))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r << ln;
    return 0;
}