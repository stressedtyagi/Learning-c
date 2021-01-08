#include "../../std_lib_facilities.h"
using namespace std;
int main(){
	int by = 1998;
	cout << dec << by << '\t'
		<< hex << by << '\t'
		<< oct << by << endl;
	cout << showbase 
		<< dec << by << '\t'
		<< hex << by << '\t'
		<< oct << by << endl;
	cin.unsetf(ios::oct);
	cout << noshowbase << dec << 2020 - 1998 << endl;
	return 0;
}
