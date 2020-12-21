#include "../../../std_lib_facilities.h"
int main(){
	vector<string> digits = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	
	int n;
	cout << "Enter number in digits : ";
	cin >> n;
	if (n >= 0 && n <= 9)
		cout << digits[n] << endl;
	else 
		cout << "Enter Valid Digit !!" << endl;
	
	string str;
	cout << "Enter Number in numerics : ";
	cin >> str;
	for(int i = 0; i < 10; i++)
		if(digits[i] == str)
			cout << i << endl;

	return 0;
}
