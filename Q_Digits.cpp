#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        do
        {
            cout << v % 10 << " ";
            v = v / 10;
        } while (v != 0);
        cout << endl;
    }
    return 0;
}
