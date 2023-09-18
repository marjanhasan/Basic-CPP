#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int b = a % 10, c = a / 10;
    if (b % c == 0 || c % b == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
