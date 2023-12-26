#include<iostream>
using namespace std;
int firstocc(int arr[],int n , int k){
    int s = 0 , e = n-1 , m = s+(e-s)/2;
    int ans;
    while (s<=e){
        if (arr[m]==k){
            ans = m;
            e = m - 1;
        }
        else if (arr[m]>k){
            e = m - 1;
        }
        else {
            s = m + 1;
        }
        m = s + (e-s)/2;
        
    }
    return ans;
    
}
int lastocc(int arr[],int n , int k){
    int s = 0 , e = n-1 , m = s+(e-s)/2;
    int ans;
    while (s<=e){
        if (arr[m]==k){
            ans = m;
            s = m + 1;
        }
        else if (arr[m]>k){
            e = m - 1;
        }
        else {
            s = m + 1;
        }
        m = s + (e-s)/2;
        
    }
    return ans;
}

int main (){
    int arr[7] = {0,1,1,2,2,2,2};
    int n = 7;
    int k = 2;
    cout<<firstocc(arr,n,k);
    cout<<lastocc(arr,n,k);
}