#include <iostream>
using namespace std;

int main (){
    string s = "N2inJA$ ajnI2n";
    
    for (int i = 0;i<s.length();i++){
        if (((s[i]<'A')&&(s[i]>'Z'))||((s[i]<'a')&&(s[i]>'z'))||((s[i]>0)&&(s[i]<9))){
            
            s.erase(i,1);
            i--;
        }
        cout<<s[i];
    }
    
}   