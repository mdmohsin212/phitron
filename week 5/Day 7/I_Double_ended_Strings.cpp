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
    ll t;
    cin >> t;
    while (t--)
    {
        string s, s1;
        cin >> s >> s1;
        int n = min(s.size(), s1.size());
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            int j = 0;
            while (j + i <= s.size())
            {
                int k = 0;
                while (k + i <= s1.size())
                {
                    if (s.substr(j, i) == s1.substr(k, i))
                    {
                        ans = max(ans, i);
                    }
                    k++;
                }
                j++;
            }
        }
        cout << s.size() + s1.size() - 2 * ans << ln;
    }
    return 0;
}