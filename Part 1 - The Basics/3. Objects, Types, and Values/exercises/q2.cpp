#include "../../../std_lib_facilities.h"
int main(){
	double val1,val2;
	cin >> val1 >> val2;
	if(val1 > val2)
		cout << val1 << "is greater than " << val2;
	else 
		cout << val2 << " is greater than " << val1;
	cout << "\n Sum " << val1+val2;
	cout << "\n Diff " << val1-val2;
	cout << "\n Product " << val1*val2;
	cout << "\n Ratio " << val1/val2;
	return 0;
}
