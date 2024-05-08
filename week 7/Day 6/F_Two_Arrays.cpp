#include<bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int,int>
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
        int n;
        cin >> n;
        int a[n + 3], b[n + 3];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        bool ans = false;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > b[i] or b[i] - a[i] > 1)
            {
                ans = true;
                break;
            }
        }
        if (ans)
        {
            no;
        }
        else
        {
            yes;
        }
    }
    return 0;
}