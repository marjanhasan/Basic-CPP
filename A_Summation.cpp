#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int res = 0;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        res += v;
    }
    if (res < 0)
        cout << res * -1 << endl;
    else
        cout << res << endl;
    return 0;
}
