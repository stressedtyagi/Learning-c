#include "../../../std_lib_facilities.h"
int main(){
	vector<int> fibo{1,1,2,3,5,8,13,21,34};
	int count = 1;
	for(auto i : fibo){
		cout << count << " - " << i << endl;
		count++;
	}
	long long int next = 0;
	while(next < (INT8_MAX - fibo[fibo.size()-1]) ){

		next = fibo[fibo.size()-1] + fibo[fibo.size()-2];
		fibo.push_back(next);
		cout << count << " - "  << next << endl;
		count++;
	}
	return 0;
}
