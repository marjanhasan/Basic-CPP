#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e = 0, o = 0, p = 0, neg = 0;
    // e = o = p = neg = 0;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        if (v % 2 == 0)
            e++;
        else
            o++;
        if (v > 0)
            p++;
        else if (v < 0)
            neg++;
    }
    cout << "Even: " << e << endl
         << "Odd: " << o << endl
         << "Positive: " << p << endl
         << "Negative: " << neg << endl;
    return 0;
}
