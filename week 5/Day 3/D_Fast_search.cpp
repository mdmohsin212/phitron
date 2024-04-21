#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, q;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> q;
    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        ll cnt = upper_bound(v.begin(), v.end(), b) - lower_bound(v.begin(), v.end(), a);
        cout << cnt << " ";
    }
    return 0;
}