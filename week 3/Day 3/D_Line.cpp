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
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vi v, ans(n + 1);
        ll total = 0, change = 0;
        for (int i = 0; i < n; i++)
        {
            ll Left = i;
            ll Right = n - i - 1;
            if (s[i] == 'L')
            {
                if (Right > Left)
                {
                    change++;
                    total += Right;
                    v.push_back(Right - Left);
                }
                else
                {
                    total += Left;
                }
            }
            else
            {
                if (Left > Right)
                {
                    change++;
                    total += Left;
                    v.push_back(Left - Right);
                }
                else
                {
                    total += Right;
                }
            }
        }
        for (int i = change; i <= n; i++)
        {
            ans[i] = total;
        }
        sort(v.begin(), v.end(), greater<>());
        for (int i = change - 1; i >= 1; i--)
        {
            total -= v.back();
            ans[i] = total;
            v.pop_back();
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << ln;
    }
    return 0;
}