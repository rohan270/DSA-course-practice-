#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for (int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
