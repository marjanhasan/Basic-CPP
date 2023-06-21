#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= '0' && c <= '9')
        cout << "IS DIGIT\n";
    else
    {
        cout << "ALPHA\n";
        if (c >= 'a' && c <= 'z')
            cout << "IS SMALL\n";
        else
            cout << "IS CAPITAL\n";
    }
    return 0;
}
