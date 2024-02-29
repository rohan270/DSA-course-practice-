#include <iostream>
using namespace std;
int main()
{
    int n;
    
    cout << "enter the size of array :";
    cin >> n;
    cout << endl;
    cout << "Enter the elements :";
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0];
    for (int j = 1; j < n - 1; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        else if (arr[j] < min)
        {
            min = arr[j];
        }
    }
    cout << min << " " << max;
}