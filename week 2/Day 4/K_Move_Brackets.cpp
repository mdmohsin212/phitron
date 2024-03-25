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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> si;
        for (int i = 0; i < n; i++)
        {
            if (!si.empty() && si.top() == '(' && s[i] == ')')
            {
                si.pop();
            }
            else
            {
                si.push(s[i]);
            }
        }
        cout << si.size() / 2 << ln;
    }
    return 0;
}