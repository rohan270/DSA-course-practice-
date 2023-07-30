#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int arr[n] = {10,3,5,77,24,33,90,871,10,21};

    for (int i = 0;i<n-1;i++){
        bool swapp = false;
        for (int j = 0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                swap (arr[j],arr[j+1]);
                swapp = true;
            }
        }
        if (swapp == false ){
            break;
        }
    }
    for (int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
