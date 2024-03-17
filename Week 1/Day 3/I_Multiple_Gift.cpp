#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n >> m;
    int cnt = 1;
    while (n * 2 <= m)
    {
        n *= 2;
        cnt++;        
    }
    cout << cnt << endl;
    return 0;
}