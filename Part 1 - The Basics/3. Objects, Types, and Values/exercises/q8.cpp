#include "../../../std_lib_facilities.h"
int main(void){
	int n;
	cin >> n;
	if(n%2 == 0){
		cout << "The value " << n << " is an even number";
	}else {
		cout << "The value " << n << " is an odd number";
	}
	return 0;
}
