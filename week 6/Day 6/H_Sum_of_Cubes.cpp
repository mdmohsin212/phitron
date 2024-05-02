#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 1e4;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    vi pw;
    for (int i = 1; i <= N; i++)
    {
        pw.push_back(pow(i, 3));
    }
    while (t--)
    {
        ll x;
        cin >> x;
        bool ans = false;
        for (int i = 0; i < N; i++)
        {
            ll l = 0, r = N - 1, mid;
            ll need = x - pw[i];
            bool ok = false;
            while (l <= r)
            {
                mid = l + (r - l) / 2;
                if (pw[mid] == need)
                {
                    ok = true;
                    break;
                }
                else if (pw[mid] > need)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if (ok)
            {
                ans = true;
                break;
            }
        }
        if (ans)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}
