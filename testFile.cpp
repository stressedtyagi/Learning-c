#include "std_lib_facilities.h"

int main(void){
	char ch = ' ';
    cout << "Enter a alphabet : ";
    cin >> ch;

    switch(ch){
        case'a' :  case'A' :
            cout << "Apple\n";
            break;
        case'b' :  case'B' :
            cout << "Bloomberg\n";
            break;
        case'c' :  case'C' :
            cout << "Cisco\n";
            break;
        case'd' :  case'D' :
            cout << "D-Link\n";
            break;
        default:
            cout << "Sorry\n";
    } 
}
