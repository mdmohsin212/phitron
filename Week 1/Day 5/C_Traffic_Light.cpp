#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        int ans = 0, mx = 0;
        if (c == 'g')
        {
            cout << 0 << endl;
            continue;
        }
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'g')
            {
                mx = max(mx, ans);
                flag = false;
            }
            if (s[i] == c && flag == false)
            {
                ans = 0;
                flag = true;
            }
            if (flag)
            {
                ans++;
            }
        }
        cout << mx << endl;
    }
    return 0;
}