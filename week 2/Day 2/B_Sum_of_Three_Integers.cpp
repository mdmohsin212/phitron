#include<bits/stdc++.h>
#define ll long long
#define pi pair<int,int>
#define ln '\n'
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, s;
    cin >> k >> s;
    int ans = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            int c = s - i - j;
            if (c >= 0 && c <= k)
            {
                ans++;
            }
        }
    }
    cout << ans << ln;
    return 0;
}