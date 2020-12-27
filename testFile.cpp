#include "std_lib_facilities.h"
#include <typeinfo>
#include <cxxabi.h>
int main(void){
	// char ch = ' ';
    // cout << "Enter a alphabet : ";
    // cin >> ch;

    // switch(ch){
    //     case'a' :  case'A' :
    //         cout << "Apple\n";
    //         break;
    //     case'b' :  case'B' :
    //         cout << "Bloomberg\n";
    //         break;
    //     case'c' :  case'C' :
    //         cout << "Cisco\n";
    //         break;
    //     case'd' :  case'D' :
    //         cout << "D-Link\n";
    //         break;
    //     default:
    //         cout << "Sorry\n";
    // }

    // int *a = new int{2};
    // a[0] = 1;
    // a[1] = 2;
    // cout << a << " " << &a << endl;
    // cout << abi::__cxa_demangle(typeid(a).name(),nullptr,nullptr,nullptr) << " " 
    //     << abi::__cxa_demangle(typeid(&a).name(),nullptr,nullptr,nullptr) << endl;
    // cout << sizeof(a) << " " << sizeof(&a);
    // return 0; 

    vector<int> v{1,2,3,4,5,6,6};
    for (int &i : v)
    {
        i = i+1;
    }
    for(int i : v){
        cout << i << " ";
    }
    
}
