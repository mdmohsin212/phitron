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
        ll n;
        cin >> n;
        ll sum = 0;
        vi a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
        }
        ll cnt = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && flag == false)
            {
                // cout << "f : " << a[i] << ln;
                cnt++;
                flag = true;
            }
            if (flag == true)
            {
                if (a[i] > 0)
                {
                    // cout << "t : " << a[i] << ln;
                    flag = false;
                }
            }
        }
        cout << sum << " " << cnt << ln;
    }
    return 0;
}