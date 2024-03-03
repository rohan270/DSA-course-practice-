#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int>v;
    for(int i = 0;i<n;i++){
        if(arr[i]>=0){
            v.push_back(arr[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(arr[i]<0){
            v.push_back(arr[i]);
        }
    }
    for (int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
