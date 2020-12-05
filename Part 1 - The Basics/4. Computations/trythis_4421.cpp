#include "../../std_lib_facilities.h"
int main(){
	for(char c = 'a'; c <= 'z'; c++){
		cout << c << '\t' << int(c) << endl;
	}
	cout << endl;
	for(char c = 'A'; c <= 'Z'; c++){
		cout << c << '\t' << int(c) << endl;
	}

	return 0;
}
