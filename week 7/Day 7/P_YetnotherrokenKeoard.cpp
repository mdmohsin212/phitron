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
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        vi cap, small;
        vector<bool> ans(n + 2, true);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'b')
            {
                if (!small.empty())
                {
                    ans[small.back()] = false;
                    small.pop_back();
                }
                ans[i] = false;
            }
            else if (s[i] == 'B')
            {
                if (!cap.empty())
                {
                    ans[cap.back()] = false;
                    cap.pop_back();
                }
                ans[i] = false;
            }
            else if (s[i] >= 'A' and s[i] <= 'Z')
            {
                cap.push_back(i);
            }
            else
            {
                small.push_back(i);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (ans[i])
            {
                cout << s[i];
            }
        }
        cout << ln;
    }
    return 0;
}