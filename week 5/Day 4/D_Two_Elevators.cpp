#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
#define vi vector<int>
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
        ll a,b,c;
        cin >> a >> b >> c;
        ll ans1 = a - 1, ans2;
        if (b > c)
        {
            ans2 = b - 1;
        }
        else
        {
            ans2 = (c - b) + (c - 1);
        }
        if (ans1 < ans2)
        {
            cout << 1 << ln;
        }
        else if (ans2 < ans1)
        {
            cout << 2 << ln;
        }
        else
        {
            cout << 3 << ln;
        }
    }
    return 0;
}