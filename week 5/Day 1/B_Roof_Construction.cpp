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
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool flag = true;
        for (int i = n - 1; i >= 1; i--)
        {
            if ((i & (i - 1)) == 0 and flag)
            {
                cout << i << " " << 0 << " ";
                flag = false;
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << ln;
    }
    return 0;
}