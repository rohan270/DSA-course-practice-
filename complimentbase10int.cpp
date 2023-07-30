#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a = num;
    int mask;
    if (num == 0)
    {
        cout << 1;
    }
    else{
        while (num != 0)
        {
        
            mask = (mask << 1) | 1;
            num = num >> 1;
        }
        int ans = (~a) & mask;
        cout << ans;
    }
}