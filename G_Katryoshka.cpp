#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int e, m, b, res = 0;
    cin >> e >> m >> b;

    if (e == 0 || b == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        long long int min = e;
        if (m < min)
            min = m;
        if (b < min)
            min = b;
        e -= min;
        m -= min;
        b -= min;
        res += min;
        if (e / 2 < b)
            res += e / 2;
        else
            res += b;
        cout << res << endl;
    }
    return 0;
}
