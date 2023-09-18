#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    cout << &x << endl;
    int *p = &x;        // ekhane *p hoilo pointer variable
    cout << p << endl;  // x er address print krbe
    cout << *p << endl; // x er value print krbe(derefernce)

    *p = 100; //(derefernce)
    cout << *p << endl;
    cout << "x: " << x << endl;
    return 0;
}
