#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin >> s >> t;
    int l = 0, r = 0, ans = 0;
    while (l < s.size())
    {
        if (s[l] != t[r])
        {
            ans++;
        }
        l++;
        r++;
    }
    cout << ans << '\n';
    return 0;
}