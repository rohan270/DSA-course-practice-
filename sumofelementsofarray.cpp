#include <iostream>
using namespace std;
int main (){
    int size;
    int arr [10];
    cout << "Enter the size of the array :"<< endl;
    cin >> size;
    cout << "Enter the elements of the array :"<<endl;
    int n = size;
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int j = 0;j<n;j++){
        sum = sum + arr[j];

    }
    cout << "The sum of the elements of the array is :"<<sum<<endl;
}