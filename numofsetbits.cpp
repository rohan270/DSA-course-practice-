#include <iostream>
using namespace std;
void setbits()
{
    int a, b, count;
    cin >> a >> b;
    while (a != 0)
    {
        if (a & 1)
        {
            count++;
        }

        a = a >> 1;
    }
    while (b != 0)
    {
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    cout << count;
}
int main()
{
    setbits();
    return 0;
}