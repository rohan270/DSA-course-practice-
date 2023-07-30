#include <iostream>
using namespace std;
void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    } 
    cout << endl;
}
void swapalt(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int odd[7] = {5, 4, 6, 7, 2, 3, 5};
    int even[6] = {90, 54, 555, 737, 999};
    swapalt(odd, 7);
    swapalt(even, 6);
    printarr(odd, 7);
    printarr(even, 6);
}