#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = (1 << 15);
vi pl;
void plaindrom()
{
    for (int i = 0; i < N; i++)
    {
        string s = to_string(i);
        int len = s.size();
        bool ans = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                ans = false;
                break;
            }
        }
        if (ans)
        {
            pl.push_back(i);
        }
    }
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    plaindrom();
    while (t--)
    {
        int n;
        cin >> n;
        vi a, cnt(N);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }
        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < pl.size(); j++)
            {
                int cur = (a[i] ^ pl[j]);
                ans += cnt[cur];
            }
        }
        cout << (ans / 2) << ln;
    }
    return 0;
}