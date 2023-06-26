#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 0)
    {
        for (int i = n; i < 2; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
