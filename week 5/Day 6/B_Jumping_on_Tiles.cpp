#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<ll, ll>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.size();
        ll first = s[0] - 'a', last = s[n - 1] - 'a';
        vector<pi> a;
        if (first < last)
        {
            for (int i = 1; i < n - 1; i++)
            {
                ll chr = s[i] - 'a';
                if (first <= chr and chr <= last)
                {
                    a.push_back({chr, i + 1});
                }
            }
            sort(a.begin(), a.end());
        }
        else
        {
            for (int i = 1; i < n - 1; i++)
            {
                ll chr = s[i] - 'a';
                if (first >= chr and chr >= last)
                {
                    a.push_back({chr, i + 1});
                }
            }
            sort(a.begin(), a.end(), greater<pi>());
        }
        cout << abs(first - last) << " " << a.size() + 2 << ln << 1 << " ";
        for (auto value : a)
        {
            cout << value.second << " ";
        }
        cout << n << ln;
    }
    return 0;
}