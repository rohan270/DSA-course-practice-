#include <iostream>
using namespace std;
int binarySearch(int arr[],int size,int key){
    int start = 0,end = size - 1;
    int mid = (start+end)/2;
    while (start<=end){
        if (key==arr[mid]){
            return mid;
            
        }
        if (key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
    
}

int main (){
    int even[10]={1,32,45,56,68,70,85,90,120,500};
    int odd[11]={5,16,32,43,49,68,72,79,85,87,94};
    int index = binarySearch(even,10,120);
    int pos = binarySearch(odd,11,32);
    cout<<index<<endl;
    cout<<pos; 
    return 0;
}