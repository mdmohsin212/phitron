#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if (s.size() == 4)
    {
        cout << s << endl;
    }
    else
    {
        int m = 4 - s.size();
        for (int i = 0; i < m; i++)
        {
            cout << 0;
        }
        cout << s;
    }
    return 0;
}