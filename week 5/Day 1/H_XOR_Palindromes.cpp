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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string s1(n + 1, '0');
        int cnt = 0, l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                cnt++;
            }
            l++;
            r--;
        }
        s1[cnt] = '1';
        for (int i = cnt; i <= n - cnt; i += 2)
        {
            s1[i] = '1';
            if (n % 2)
            {
                s1[i + 1] = '1';
            }
        }
        cout << s1 << ln;
    }
    return 0;
}