#include "../../../std_lib_facilities.h"
int main(){
	int p,n,di,q,hd,fd;
	cout << "Pennies : ";
	cin >> p;
	cout << "Nickels : ";
	cin >> n;
	cout << "Dimes : ";
	cin >> di;
	cout << "Quaters : ";
	cin >> q;
	cout << "Half Dollars : ";
	cin >> hd;
	cout << "One full Dollar : ";
	cin >> fd;

	int total = p + (n*5) + (di*10) + (q*25) + (hd*50) + (fd * 100);
	if(p > 1){
		cout << "You have " << p << " pennies" << endl;
	}else if (p == 1){
		cout << "You have " << p << " penny" << endl;	
	}

	if(n > 1){
		cout << "You have " << n << " nickels" << endl;
	}else if (n == 1){
		cout << "You have " << n << " nickel" << endl;
	}

	if(di > 1){
		cout << "You have " << di << " dimes" << endl;
	}else if (di == 1){
		cout << "You have " << di << " dime" << endl;
	}

	if(q > 1){
		cout << "You have " << q << " quarters" << endl;
	}else if (q == 1){
		cout << "You have " << q << " quarters" << endl;
	}

	if(hd > 1){
		cout << "You have " << hd << " half dollers" << endl;
	}else if (hd == 1){
		cout << "You have " << hd << " half doller" << endl;
	}

	if(fd > 1){
		cout << "You have " << hd << " half dollers" << endl;
	}else if(fd == 1){
		cout << "You have " << hd << " half doller" << endl;
	}

	cout << "The value of all of your coins is " << total << "  cents" << endl; 
	cout << "The value of all of your coins is $" << total/100.0;

	return 0;
}
