/*
If we define the median of a sequence as “a number so that exactly as many elements come
before it in the sequence as come after it,” fix the program in §4.6.3 so that it always prints out a
median. Hint: A median need not be an element of the sequence.
*/

#include "../../../std_lib_facilities.h"
int main(){
	vector<double> v;
	for(double x; cin >> x;){
		v.push_back(x);
	}
	sort(v);
	double median;
	if(v.size()%2 == 0)
		median = (v[v.size()/2 - 1] + v[v.size()/2])/2;
	else 
		median = v[v.size()/2];
	cout << "Median of the sequence is : " << median << endl;

	return 0;
}
