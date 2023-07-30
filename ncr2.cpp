#include <iostream>
using namespace std;
int fact(int num)
{
    int ans = 1;
    for (int i = 0; i < num; i++)
    {
        ans = ans * (num - i);
    }
    return ans;
}
int ncr()
{
    int ans, n, r;
    cout << "enter the value of n and r :";
    cin >> n >> r;
    ans = fact(n) / (fact(r) * fact(n - r));
    return ans;
}
int main()
{
    int ans = ncr();
    cout << ans;
    return 0;
}