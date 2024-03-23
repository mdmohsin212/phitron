#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define ln '\n'
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
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i] >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < s[i].size(); j++)
            {
                if (s[i][j] == 'U')
                {
                    if (a[i] == 0)
                    {
                        a[i] = 9;
                    }
                    else
                    {
                        a[i] -= 1;
                    }
                }
                else if (s[i][j] == 'D')
                {
                    if (a[i] == 9)
                    {
                        a[i] = 0;
                    }
                    else
                    {
                        a[i] += 1;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << ln;
    }
    return 0;
}