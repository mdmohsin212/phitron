#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<string> a(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s = "";
    for (int i = n - 1; i >= 0; i--)
    {
        if (mp[a[i]] == 0)
        {
            s += a[i].substr(a[i].size() - 2);
            mp[a[i]]++;
        }
    }
    cout << s << ln;
    return 0;
}
