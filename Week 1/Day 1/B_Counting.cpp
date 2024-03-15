#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (m - n) + 1 << endl;
    }
    return 0;
}