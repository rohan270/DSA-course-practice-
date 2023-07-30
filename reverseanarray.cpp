#include <iostream>
using namespace std;
void reverse (int arr[],int n){
    int start = 0;
    int end = n-1;
    while (start<=end){
        swap (arr[start],arr[end]);
        start++;
        end--;

    }
}

void printarr(int arr[],int n){
    for (int i = 0;i<n;i++){
        cout << arr[i]<< " ";

    }
    cout << endl;
}



int main (){
    int arr [6]={2,24,22,11,18,204};
    int brr [5]={20,54,89,249,485};
    reverse (arr,6);
    reverse (brr,5);
    printarr(arr,6);
    printarr(brr,5);
    return 0;
}