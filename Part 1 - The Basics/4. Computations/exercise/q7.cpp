#include "../../../std_lib_facilities.h"
int main(){
	double x,y;
	char oper;
	int choice = 0;
	cout << "How do you want to enter the number for calculator ?\n";
	cout << "1. Numeric" << endl;
	cout << "2. Spelled Out"<<endl;
	cout << "Choice --> ";
	cin >> choice;

	if(choice == 1){
		cout << "************" << endl;
		cout << "Digit 1 : ";
		cin >> x ;
		cout << "Digit 2 : ";
		cin >> y ;
		cout << "Operator : ";
		cin >> oper;
    		if(oper == '+')
			cout << "Result : " << x + y << endl;
		else if(oper == '-')
			cout << "Result : " << x - y << endl;
		else if(oper == '*')
			cout << "Result : " << x * y << endl;
		else if(oper == '/')
			cout << "Result : " << x / y << endl;
	}else if(choice == 2){
		vector<string> digits = {"zero","one","two","three","four","five","six","seven","eight","nine"};
		string x = "", y = "";
		cout << "************" << endl;
		cout << "Digit 1 : ";
		cin >> x ;
		cout << "Digit 2 : ";
		cin >> y ;
		cout << "Operator : ";
		cin >> oper;
		
		int a = -1, b = -1;
		bool flag = true;
     		if(oper == '+'){
			for(int i = 0; i < digits.size() && flag; i++){
				if(digits[i] == x)
					a = i;
				if(digits[i] == y)
					b = i;
				if(a != -1 && b != -1)
					flag = false;
			}
			if(a != -1 && b != -1)
				cout << "Result : " << a + b << endl;
			else 
				cout << "Enter Correct digit" << endl;
		}
		else if(oper == '-'){
			for(int i = 0; i < digits.size() && flag; i++){
				if(digits[i] == x)
					a = i;
				if(digits[i] == y)
					b = i;
				if(a != -1 && b != -1)
					flag = false;
			}
			if(a != -1 && b != -1)
				cout << "Result : " << a - b << endl;
			else 
				cout << "Enter Correct digit" << endl;
		}
		else if(oper == '*'){
			for(int i = 0; i < digits.size() && flag; i++){
				if(digits[i] == x)
					a = i;
				if(digits[i] == y)
					b = i;
				if(a != -1 && b != -1)
					flag = false;
			}
			if(a != -1 && b != -1)
				cout << "Result : " << a * b << endl;
			else 
				cout << "Enter Correct digit" << endl;
		}
		else if(oper == '/'){
			for(int i = 0; i < digits.size() && flag; i++){
				if(digits[i] == x)
					a = i;
				if(digits[i] == y)
					b = i;
				if(a != -1 && b != -1)
					flag = false;
			}
			if(a != -1 && b != -1)
				cout << "Result : " << a / b << endl;
			else 
				cout << "Enter Correct digit" << endl;
		}else {
			cout << "!!!Enter Vaild Operator!!!" << endl;
		}
		

	}

	return 0;
}
