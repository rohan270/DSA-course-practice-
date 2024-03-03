#include <bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cout<<"enter the k value : ";
    cin>>k;
    int n;
    cout<< "Enter the size of the array : ";
    cin>> n;
    int arr[n];
    for (int i = 0; i<n;i++){
        cin>>arr[i];
    }
    int start = 0, end = n-1;
    sort(arr,arr+n);
    cout<< arr[k-1];
}