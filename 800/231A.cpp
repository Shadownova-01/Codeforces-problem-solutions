#include <iostream>
using namespace std;
int main()
{
    int t;
    int y = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        int x;
        cin >> a >> b >> c;
        x = a + b + c;
        if (x > 1)
            y = y + 1;
    }
    cout << y << endl;
}