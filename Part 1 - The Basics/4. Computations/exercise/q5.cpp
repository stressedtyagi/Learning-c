#include "../../../std_lib_facilities.h"
int main(){
	double x,y;
	char oper;
	cin >> x >> y >> oper;
	if(oper == '+')
		cout << "Result : " << x + y << endl;
	else if(oper == '-')
		cout << "Result : " << x - y << endl;
	else if(oper == '*')
		cout << "Result : " << x * y << endl;
	else if(oper == '/')
		cout << "Result : " << x / y << endl;

	return 0;
}
