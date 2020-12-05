#include "../../std_lib_facilities.h"
int main(void){
	string operations;
	double x, y;
	cin >> operations;
	if(operations == "+"){
		cin >> x >> y;
		cout << x + y;
	}else if (operations == "-"){
		cin >> x >> y;
		cout << x - y;
	}else if (operations == "/"){
		cin >> x >> y;
		cout << x / y;
	}else if (operations == "*"){
		cin >> x >> y;
		cout << x * y;
	}
	return 0;
}		
