#include <iostream>
using namespace std;
int main()
{
    int a;
    int x, y;
    int u, v;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> a;
            if (a == 1)
            {
                x = j;
                y = i;
            }
        }
    }
    u = 3 - x;
    v = 3 - y;
    if (u < 0)
        u = u * -1;
    if (v < 0)
        v = v * -1;
    cout << u + v << endl;

    return 0;
}