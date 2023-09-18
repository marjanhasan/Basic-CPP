#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool exist = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            exist = true;
        }
    }
    if (!exist)
        cout << "-1" << endl;
    return 0;
}
