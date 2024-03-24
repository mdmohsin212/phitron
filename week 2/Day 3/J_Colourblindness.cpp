#include<bits/stdc++.h>
#define ll long long
#define pi pair<int,int>
#define ln '\n'
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s,s1;
        cin >> s >> s1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'G')
            {
                s[i] = 'B';
            }
            if (s1[i] == 'G')
            {
                s1[i] = 'B';
            }
        }
        if (s == s1)
        {
            cout << "YES" << ln;
        }
        else
        {
            cout << "NO" << ln;
        }
    }
    return 0;
}