#include <iostream>
using namespace std;
int findunique(int *arr,int size){
    int ans;
    for (int i = 0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element of array";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    findunique(arr[],size);
}