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
        vector<string> v(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        string ans(n, '0');
        for (int i = 0; i < n; i++)
        {
            int flag = 0;
            for (int j = 0; j < v[i].size(); j++)
            {
                string a = v[i].substr(0, j);
                string b = v[i].substr(j, v[i].size() - 1);
                if (mp[a] and mp[b])
                {
                    flag = 1;
                }
            }
            cout << flag;
        }
        cout << ln;
    }
    return 0;
}