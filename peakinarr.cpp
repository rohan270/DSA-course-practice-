#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the number of elements in array :";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements of array :";
    for (int i = 0;i<n;i++){
        cin>> arr[i];   
    }
    int s = 0, e = n-1,ans,m = s +(e-s)/2;
    while (s<=e){
        if ((arr[m]>arr[m+1])&&(arr[m]>arr[m -1])){
            ans = m;
            break;
        }
        else if (arr[m-1]>arr[m]){
            e = m - 1;
        }
        else {
            s = m + 1;
        }
        m = s + (e-s)/2;
    }
    cout<<ans;
}