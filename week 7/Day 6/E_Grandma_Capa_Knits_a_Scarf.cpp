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
        string s;
        cin >> s;
        int ans = 1e9, i = 'a';
        while (i <= 'z')
        {
            int change = 0, l = 0, r = n - 1;
            while (l <= r)
            {
                if (s[l] != s[r])
                {

                    if (s[r] == i)
                    {
                        r--;
                        change++;
                    }
                    else if (s[l] == i)
                    {
                        l++;
                        change++;
                    }
                    else
                    {
                        change = 1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans, change);
            i++;
        }
        if (ans != 1e9)
        {
            cout << ans << ln;
        }
        else
        {
            cout << -1 << ln;
        }
        
    }
    return 0;
}