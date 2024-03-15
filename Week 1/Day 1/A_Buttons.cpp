#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin >> a >> b;
    if (a == b || a < b)
    {
        cout << a + b << endl;
    }
    else
    {
        cout << (a + b) + 1 << endl;
    }
    return 0;
}