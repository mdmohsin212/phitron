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
        cin >> n;
        string s;
        cin >> s;
        string cmp = "Timur";
        sort(cmp.begin(), cmp.end());
        if (n < 5 || n > 5)
        {
            cout << "NO" << '\n';
        }
        else
        {
            sort(s.begin(), s.end());
            if (s == cmp)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}