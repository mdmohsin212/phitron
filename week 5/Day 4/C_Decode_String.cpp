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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ans;
        for (int i = n - 1; i >= 0; i--)
        {
            int zero = s[i] - '0';
            if (zero == 0)
            {
                zero = ((s[i-2] - '0') * 10) + (s[i-1] - '0');
                i -= 2;
            }
            ans.push_back('a' + (zero - 1));
        }
        reverse(ans.begin(),ans.end());
        cout << ans << ln;
    }
    return 0;
}