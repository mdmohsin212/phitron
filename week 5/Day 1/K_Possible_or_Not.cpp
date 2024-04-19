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
        int n,b;
        cin >> n >> b;
        vi a(n),ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & b) == b)
            {
                ans.push_back(a[i]);
            }
        }
        if (ans.empty())
        {
            no;
            continue;
        }
        int AND = ans[0];
        for (int i = 1; i < ans.size(); i++)
        {
            AND &= ans[i];
        }
        if (AND == b)
        {
            yes;
        }
        else
        {
            no;
        }
        
    }
    return 0;
}