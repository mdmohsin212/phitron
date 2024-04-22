#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<int>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
void slove()
{
    string s;
    cin >> s;
    for (int i = 0; i < (s.size() / 2) - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            yes;
            return;
        }
    }
    no;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        slove();
    }
    return 0;
}