#include "std_lib_facilities.h"
#include <typeinfo>
#include <cxxabi.h>

int fact(int);
void sizes(char ch, int i, int* p) {
    double x = 2.33;
    double *d = &x;
    *d = 33;
    cout << *d << " " << d << " " << &x << endl;

    int *l = new int[3]{1,2,3};
    cout << l << " " << (l+1) << endl;
    cout << *(*(&l)+4) << endl;
    
    int temp = 3;
    int *ptr = &temp;
    *ptr = 3;
    cout << ptr << " " << *ptr << endl;   
    
    int y = 93;
    int &cc = y;
    cout << "y : " << y << endl;
    cc = 13;
    cout << "y : " << y << endl;

    cout << "the size of cha r is " << sizeof(char) << ' ' << sizeof (ch) << '\n';
    cout << "the size of int is " << sizeof(int) << ' ' << sizeof (i) << '\n';
    cout << "the size of int* is " << sizeof(int*) << ' ' << sizeof (p) << '\n';
    cout << "the size of double is " << sizeof(double) << ' ' << sizeof (2.55) << '\n';
    cout << "the size of float is " << sizeof(float) << ' ' << sizeof (2.55f) << '\n';
    cout << "the size of bool is " << sizeof(bool) << ' ' << sizeof (false) << '\n';
    cout << "the size of double* is " << sizeof(double*) << ' ' << sizeof (d) << '\n';

    vector<int> v(1000);
    cout << "the size of vector<int>(1000) is " << sizeof (v) << '\n';
}

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

    // vector<int> v{1,2,3,4,5,6,6};
    // for (int &i : v)
    // {
    //     i = i+1;
    // }
    // for(int i : v){
    //     cout << i << " ";
    // }

    cout << fact << endl;

    
    int x = 3;
    sizes('a',2,&x);
}

int fact(int x){
    return x;
}