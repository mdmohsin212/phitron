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
        string s, s1;
        cin >> s >> s1;
        char s_last = s.back();
        char s1_last = s1.back();

        if (s_last < s1_last)
        {
            cout << ">" << ln;
        }
        else if (s_last > s1_last)
        {
            cout << "<" << ln;
        }
        else if (s_last == s1_last)
        {
            if (s.size() == s1.size())
            {
                cout << "=" << ln;
            }
            else if (s_last == 'S')
            {
                if (s.size() < s1.size())
                {
                    cout << ">" << ln;
                }
                else
                {
                    cout << "<" << ln;
                }
            }
            else
            {
                if (s.size() < s1.size())
                {
                    cout << "<" << ln;
                }
                else
                {
                    cout << ">" << ln;
                }
            }
        }
    }
    return 0;
}