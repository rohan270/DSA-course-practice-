#include <iostream>
using namespace std;
int setbits(int a){
    int count;
    while (a!=0){
        
        if (a&1) {
            count ++;

        }
        a=a>>1;

    }
    return count;
}
int main (){
    cout << "Enter the value of a and b :";
    int a,b;
    cin >> a >> b;
    int noofsetbitsofa = setbits(a);
    int noofsetbitsofb = setbits(b);
    cout << "The sum of setbits of a and b is :"<< noofsetbitsofb << endl;
    
}