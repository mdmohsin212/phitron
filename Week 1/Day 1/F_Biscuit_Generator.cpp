#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, t, ans = 0;
    cin >> a >> b >> t;
    int time = a;
    while (time <= t)
    {
        ans += b;
        time += a;
    }
    cout << ans << endl;
    return 0;
}