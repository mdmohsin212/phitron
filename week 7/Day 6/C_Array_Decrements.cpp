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
        ll n;
        cin >> n;
        vi a(n),b(n);
        bool ans = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll diff = -1, zero_diff = -1;
        bool imp = false;
        for(int i = 0; i < n; i++){
            if (a[i] < b[i])
            {
                imp = true;
                break;
            }
            if (b[i] != 0)
            {
                if (diff == -1)
                {
                    diff = a[i] - b[i];
                }
                else
                {
                    if (a[i] - b[i] != diff)
                    {
                        imp = true;
                        break;
                    }
                }
            }
            else
            {
                zero_diff = max(zero_diff, a[i] - b[i]);
            }
        }

        if (imp)
        {
            no;
            continue;
        }
        (diff == -1 or zero_diff <= diff) ? yes : no;
    }
    return 0;
}