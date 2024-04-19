#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;
vi a;
ll n;
bool rotat(ll i, ll total)
{
    if (i == n)
    {
        if (total % 360 == 0)
        {
            return true;
        }
        return false;
    }
    bool op1 = rotat(i + 1, total + a[i]);
    bool op2 = rotat(i + 1, total - a[i]);
    return op1 || op2;
}
int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    if (rotat(0, 0))
    {
        yes;
    }
    else
    {
        no;
    }
    return 0;
}