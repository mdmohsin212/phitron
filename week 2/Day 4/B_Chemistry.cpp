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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            cnt[s[i] - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (cnt[i] % 2 != 0)
            {
                ans++;
            }
        }
        if (ans <= k)
        {
            cout << "YES" << ln;
        }
        else
        {
            if ((ans - k) == 1)
            {
                cout << "YES" << ln;
            }
            else
            {
                cout << "NO" << ln;
            }
        }
    }
    return 0;
}