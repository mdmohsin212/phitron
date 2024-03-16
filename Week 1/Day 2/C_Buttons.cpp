#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    int ans = max(a,b);
    if (ans == a)
    {
        a--;
    }
    else
    {
        b--;
    }
    int newMax = max(a,b);
    cout << ans + newMax << endl;
    return 0;
}