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
        int n;
        cin >> n;
        string s, s1;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1])
            {
                s1 += s[i];
            }
        }
        if (s1 == "meow")
        {
            cout << "YES" << ln;
        }
        else
        {
            cout << "NO" << ln;
        }
    }
    return 0;
}