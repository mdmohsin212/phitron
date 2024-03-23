#include<bits/stdc++.h>
#define ll long long
#define pi pair<int,int>
#define ln '\n'
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, l = 0, r = 0, ans = INT_MAX;
    while (r < n)
    {
        sum += v[r];
        while (sum >= s)
        {
            ans = min(ans, (r - l) + 1);
            sum -= v[l];
            l++;
        }
        r++;
    }
    if (ans == INT_MAX)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans << '\n';
    }
    return 0;
}